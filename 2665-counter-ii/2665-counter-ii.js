/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
     let i = init;
        return {
        increment: () => {
            i += 1;
            return i;
        },
        decrement: () => {
            i -= 1;
            return i;
        },
        reset: () => {
            i = init;
            return i;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */