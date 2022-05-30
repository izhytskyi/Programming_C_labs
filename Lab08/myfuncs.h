int lab010104(int a, int b);
float lab010312(float AB, float BC, float AC);
float lab020211(float x);
char* lab020511(int a);
void lab030113(float *pa, float *pb);

int lab010104(int a, int b)
{
    int pows = (pow(a, 2) + pow(b, 2));
    int abss = (abs(a) + abs(b));
    int res = pows + abss;
    return res;
}

float lab010312(float AB, float BC, float AC)
{
    float per = (AB+BC+AC)/2;
    float S = 0;
    S = sqrt(per*(per-AB)*(per-BC)*(per-AC));
    float h = (2*S)/BC;
    return h;
}

float lab020211(float x)
{
    float result = 0;
    float znamenyk = (pow(x,2) - 2*x - 10);
    if(znamenyk==0){
        printf("Division by zero!");
    }
    else{
    result = 1/(pow(x,2) - 2*x - 10);
    }
    return result;
}

char* lab020511(int a)
{
	char *months[13];
	months[0] = "zero :)";
	months[1] = "January";
	months[2] = "February";
	months[3] = "March";
	months[4] = "April";
	months[5] = "May";
	months[6] = "June";
	months[7] = "July";
	months[8] = "August";
	months[9] = "September";
	months[10] = "October";
	months[11] = "November";
	months[12] = "December";
	for(int i = 0; i < 13; i++){
		if(i == a){
			return months[i];
		}
	}
}

void lab030113(float *pa, float *pb)
{
    *pa = *pa * 2;
    *pb = *pb / 2;
}
