const orders = [
    {
        orderId: "ORD-101",
        customer: { name: "Ahmed", tier: "Gold" },
        items: [
            { product: "Laptop", price: 15000, qty: 1 },
            { product: "Mouse", price: 300, qty: 2 }
        ],
        status: "delivered"
    },
    {
        orderId: "ORD-102",
        customer: { name: "Sara", tier: "Silver" },
        items: [
            { product: "Keyboard", price: 800, qty: 1 },
            { product: "Monitor", price: 4000, qty: 2 }
        ],
        status: "pending"
    },
    {
        orderId: "ORD-103",
        customer: { name: "Omar", tier: "Gold" },
        items: [
            { product: "Headphones", price: 1200, qty: 3 }
        ],
        status: "delivered"
    },
    {
        orderId: "ORD-104",
        customer: { name: "Mona", tier: "Regular" },
        items: [
            { product: "USB Cable", price: 150, qty: 4 }
        ],
        status: "cancelled"
    }
];


function getDeliveredOrders(ordersList) {
    return ordersList.filter(function (ele) {
        return ele.status === "delivered";
    });
}

function summarizeOrders(ordersList) {
    return ordersList.map(function (order) {
        let totalAmount = order.items.reduce(function (acc, item) {
            return acc + (item.price * item.qty);
        }, 0);

        return {
            id: order.orderId,
            customerName: order.customer.name,
            totalAmount: totalAmount
        };
    });
}

function applyGoldDiscount(ordersList, discountRate = 0.1) {

    return ordersList.map(function (order) {
        let originalTotal = order.items.reduce(function (acc, item) {
            return acc + (item.price * item.qty);
        }, 0);


        if (order.customer.tier === "Gold") {
            let discountedTotal = originalTotal - (originalTotal * discountRate);

            return {
                ...order,
                Has_discount: true,
                Total_After_Discount: discountedTotal
            };
        }


        return {
            ...order,
            Has_discount: false,
            Total_After_Discount: originalTotal
        };
    })
}

function Total_Profits(ordersList) {

    let Delivered = getDeliveredOrders(ordersList);

    return Delivered.reduce(function (acc, order) {
        let orderTotal = order.items.reduce(function (sum, item) {
            return sum + (item.price * item.qty);
        }, 0);

        return acc + orderTotal;
    }, 0);
}

function groupOrdersByStatus(ordersList) {
    return ordersList.reduce(function (acc, order) {
        let currentStatus = order.status;

        if (!acc[currentStatus]) {
            acc[currentStatus] = [];
        }

        acc[currentStatus].push(order.orderId);

        return acc;
    }, {});
}

console.log(getDeliveredOrders(orders));
console.log(summarizeOrders(orders));
console.log(applyGoldDiscount(orders));
console.log(Total_Profits(orders));
console.log(groupOrdersByStatus(orders));