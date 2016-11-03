//
//  types.c
//  Space Invaders
//
//  Created by Nicola Lancellotti on 4/2/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#include "boundingBox.h"
#include "drawUtility.h"

void drawBoundingBox(const boundingBox_t *boundingBox)
{
    glColor4fv(MY_COLOR_WHITE);
    glBegin(GL_LINE_LOOP);
        glVertex2f(boundingBox->xMin, boundingBox->yMin);
        glVertex2f(boundingBox->xMax, boundingBox->yMin);
        glVertex2f(boundingBox->xMax, boundingBox->yMax);
        glVertex2f(boundingBox->xMin, boundingBox->yMax);
    glEnd();
}