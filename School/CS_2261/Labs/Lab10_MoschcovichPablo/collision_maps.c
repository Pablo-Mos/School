int collisionMaps[28][16] = {
    // T
    { 
      1, 1, 1, 0,
      0, 1, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 1, 0, 0,
      1, 1, 0, 0,
      0, 1, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 1, 0, 0,
      1, 1, 1, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      1, 0, 0, 0,
      1, 1, 0, 0,
      1, 0, 0, 0,
      0, 0, 0, 0
    },
    // L
    { 
      2, 0, 0, 0,
      2, 0, 0, 0,
      2, 2, 0, 0,
      0, 0, 0, 0
    },{ 
      2, 2, 2, 0,
      2, 0, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      2, 2, 0, 0,
      0, 2, 0, 0,
      0, 2, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 0, 0, 0,
      0, 0, 2, 0,
      2, 2, 2, 0,
      0, 0, 0, 0
    },
    // SKEW
    { 
      3, 0, 0, 0,
      3, 3, 0, 0,
      0, 3, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 0, 0, 0,
      0, 3, 3, 0,
      3, 3, 0, 0,
      0, 0, 0, 0
    },{ 
      3, 0, 0, 0,
      3, 3, 0, 0,
      0, 3, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 0, 0, 0,
      0, 3, 3, 0,
      3, 3, 0, 0,
      0, 0, 0, 0
    },
    // SQUARE
    { 
      4, 4, 0, 0,
      4, 4, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      4, 4, 0, 0,
      4, 4, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      4, 4, 0, 0,
      4, 4, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      4, 4, 0, 0,
      4, 4, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },
    // STRAIGHT
    { 
      5, 0, 0, 0,
      5, 0, 0, 0,
      5, 0, 0, 0,
      5, 0, 0, 0
    },{ 
      5, 5, 5, 5,
      0, 0, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      5, 0, 0, 0,
      5, 0, 0, 0,
      5, 0, 0, 0,
      5, 0, 0, 0
    },{ 
      5, 5, 5, 5,
      0, 0, 0, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },
    // SKEW2
    { 
      0, 6, 0, 0,
      6, 6, 0, 0,
      6, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      6, 6, 0, 0,
      0, 6, 6, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 6, 0, 0,
      6, 6, 0, 0,
      6, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      6, 6, 0, 0,
      0, 6, 6, 0,
      0, 0, 0, 0,
      0, 0, 0, 0
    },
    // L2
    { 
      0, 7, 0, 0,
      0, 7, 0, 0,
      7, 7, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 0, 0, 0,
      7, 0, 0, 0,
      7, 7, 7, 0,
      0, 0, 0, 0
    },{ 
      7, 7, 0, 0,
      7, 0, 0, 0,
      7, 0, 0, 0,
      0, 0, 0, 0
    },{ 
      0, 0, 0, 0,
      7, 7, 7, 0,
      0, 0, 7, 0,
      0, 0, 0, 0
    },
};