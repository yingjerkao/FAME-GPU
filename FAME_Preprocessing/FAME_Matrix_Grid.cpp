#include "FAME_Internal_Common.h"

int FAME_Matrix_Grid(realCPU* Point_temp, int idx_i, int idx_j, int idx_k, realCPU* mesh_lens, char* type)
{
    realCPU shiftx = 0.0, shifty = 0.0, shiftz = 0.0;

    if(strcmp(type, "Electric_x_point_set") == 0)
    {
        shiftx = 0.5;
    }

    else if(strcmp(type, "Electric_y_point_set") == 0)
    {
        shifty = 0.5;
    }

    else if(strcmp(type, "Electric_z_point_set") == 0)
    {
        shiftz = 0.5;
    }
    
    else if(strcmp(type, "Magnetic_x_point_set") == 0)
    {
        shifty = 0.5;
        shiftz = 0.5;
    }

    else if(strcmp(type, "Magnetic_y_point_set") == 0)
    {
        shiftx = 0.5;
        shiftz = 0.5;
    }

    else if(strcmp(type, "Magnetic_z_point_set") == 0)
    {
        shiftx = 0.5;
        shifty = 0.5;
    }

    else if(strcmp(type, "xyz_point_set") == 0)
    {
        shiftx = 0.5;
        shifty = 0.5;
        shiftz = 0.5;
    }

    Point_temp[0] = (idx_i + shiftx) * mesh_lens[0];
    Point_temp[1] = (idx_j + shifty) * mesh_lens[1];
    Point_temp[2] = (idx_k + shiftz) * mesh_lens[2];

    return 0;
}