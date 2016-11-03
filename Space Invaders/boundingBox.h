//
//  types.h
//  Space Invaders
//
//  Created by Nicola Lancellotti on 4/2/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef __Space_Invaders__types__
#define __Space_Invaders__types__

#include <stdio.h>
#include "glutCrossPlatform.h"

typedef struct {
    GLfloat xMin;
    GLfloat xMax;
    GLfloat yMin;
    GLfloat yMax;
} boundingBox_t;

void drawBoundingBox(const boundingBox_t *boundingBox);

#endif /* defined(__Space_Invaders__types__) */
