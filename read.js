const fs = require('fs');
const { performance } = require('perf_hooks');

const startTime = performance.now();

fs.readFile('./lists.csv', (err, data) => {
  if (err) throw err;

  if (data.includes('123.194.235.37')) {
    // do something
  }

  const endTime = performance.now();
  console.log(`[node.js] File check finished in ${(endTime - startTime)}ms`);
});
