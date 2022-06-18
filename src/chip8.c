/**
 * TODO:
 * [ ] Sound
 * [ ] .ini configuration file (or alternatively, save the
 *     configurations inside the exe).
 */

/*********************************************************/
/**                        COMMON                       **/
/*********************************************************/

#include <stdint.h>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef int32_t b32;

typedef float r32;
typedef double r64;

#include <windows.h>

#define EZ_NO_CRT_LIB
#define EZ_IMPLEMENTATION
#include "ez.h"

/*********************************************************/
/**                        UTILS                        **/
/*********************************************************/

#define ArrayCount(a) (sizeof(a)/sizeof((a)[0]))

u32 RandomIndex = 0;
u8 RandomNums[] = {
68,32,130,60,253,230,241,194,107,48,249,14,199,221,1,228,136,117,52,162,15,
11,13,4,195,110,216,14,113,224,253,119,176,118,112,235,148,11,213,51,95,
151,61,170,216,97,155,145,255,201,17,245,124,206,212,88,187,191,44,224,55,
83,201,189,250,15,240,22,157,201,87,86,116,6,102,118,207,176,180,235,137,
2,196,66,105,218,28,246,186,102,211,248,182,212,177,0,169,234,14,117,90,
92,46,130,16,36,42,8,231,7,143,127,137,56,94,176,148,35,85,81,130,
86,139,150,232,164,254,242,58,12,159,197,175,215,96,132,55,129,107,221,10,
115,9,203,74,18,82,228,218,112,230,114,15,202,164,218,30,152,64,108,24,
156,36,39,158,152,81,213,129,66,4,19,111,235,87,19,193,102,177,50,105,
221,99,252,53,199,151,255,8,166,205,144,9,80,102,167,69,173,219,109,136,
49,194,176,248,120,33,20,43,68,86,85,109,137,170,130,188,173,174,58,149,
120,250,69,53,164,20,208,37,194,75,64,174,58,193,39,114,41,136,186,151,
58,234,141,55,23,151,6,7,46,211,58,20,96,122,215,82,59,230,85,123,
81,52,222,193,150,129,244,161,51,106,162,20,13,5,151,163,230,200,160,204,
32,32,162,233,57,128,110,240,182,132,93,106,157,101,126,184,41,143,45,229,
46,173,116,199,157,21,167,95,162,155,125,171,51,47,125,112,10,124,205,37,
137,36,38,11,5,148,183,252,240,78,51,167,39,88,91,76,72,163,156,54,
150,64,105,72,16,161,105,91,153,221,80,24,126,129,32,228,220,128,224,232,
5,202,173,87,132,248,12,213,9,31,181,70,64,70,132,141,203,205,88,45,
119,248,3,90,162,224,115,122,160,253,245,115,211,172,140,112,24,36,188,81,
104,159,152,153,190,84,237,43,63,193,90,79,128,218,111,26,253,201,178,196,
84,20,46,130,51,136,42,71,41,227,123,195,221,203,84,166,224,64,249,108,
61,220,209,60,151,142,127,193,2,97,224,10,15,124,133,105,88,145,75,102,
139,159,128,228,86,182,251,215,62,106,196,104,145,55,12,60,6,151,69,38,
191,159,223,182,165,0,63,226,230,179,156,204,173,252,57,193,195,104,1,142,
101,236,209,156,87,230,101,184,1,199,218,207,172,34,252,126,148,10,208,79,
203,138,91,37,5,178,135,210,155,77,236,132,248,86,239,23,138,50,216,35,
181,34,226,10,84,82,47,205,141,155,106,106,121,170,137,35,38,188,239,25,
86,152,138,182,118,200,204,88,247,132,168,113,132,125,15,206,162,221,127,137,
97,37,84,227,75,134,235,83,70,70,225,184,158,205,123,59,105,156,34,54,
116,203,164,252,51,95,23,28,11,110,17,253,226,175,140,60,88,48,113,204,
119,253,230,193,86,118,120,145,236,199,108,231,132,169,254,56,109,40,23,7,
2,245,163,196,147,100,204,81,77,15,7,198,74,29,194,130,66,40,236,155,
7,18,31,66,21,140,60,221,46,97,14,255,66,142,98,229,199,168,137,133,
124,125,30,89,179,219,31,180,211,102,217,35,136,37,128,90,49,77,30,104,
219,22,27,46,240,189,50,160,20,64,16,226,65,202,228,12,138,46,128,166,
43,154,17,196,29,133,160,66,133,194,59,155,48,217,125,105,169,173,200,246,
53,66,229,15,149,80,102,189,199,166,49,209,176,64,33,22,153,160,213,152,
163,180,139,166,4,62,76,162,166,167,35,231,143,245,232,186,194,40,28,68,
24,251,128,125,173,185,189,206,157,237,174,85,14,75,128,113,68,57,94,210,
25,50,136,54,104,133,34,40,37,111,88,221,11,188,249,145,112,102,252,120,
217,231,187,96,246,37,131,208,103,4,194,249,39,206,217,20,180,234,3,97,
153,2,61,154,161,144,210,209,157,231,154,67,227,71,83,129,4,217,18,188,
215,205,144,9,46,46,2,196,137,237,139,190,246,172,198,233,59,247,181,74,
212,75,9,88,133,188,65,147,211,132,147,215,140,221,171,248,110,251,205,217,
46,32,66,105,76,117,13,52,129,79,245,50,204,95,1,45,218,26,111,216,
177,24,52,214,60,135,142,91,245,24,109,44,199,63,229,150,254,201,59,245,
54,76,197,103,85,131,213,147,252,109,172,248,52,4,177,136,28,225,153,51,
117,140,138,126,210,75,66,131,99,208,29,76,211,138,143,245,156,136,251,109,
255,188,240,123,173,90,92,230,76,29,166,69,109,161,252,245,168,60,65,
};
b32 RandomNumbersSeeded = 0;

void
SeedRandomNumbers()
{
    SYSTEMTIME SystemTime;
    GetSystemTime(&SystemTime);
    RandomIndex = (u32)SystemTime.wMilliseconds % ArrayCount(RandomNums);
}

u8
GetRandom(void)
{
    if(!RandomNumbersSeeded)
    {
        SeedRandomNumbers();
        RandomNumbersSeeded = 1;
    }

    u8 Num = RandomNums[RandomIndex++];
    RandomIndex = RandomIndex % ArrayCount(RandomNums);
    return(Num);
}

/*********************************************************/
/**                         GFX                         **/
/*********************************************************/

int   BufferWidth  = 0;
int   BufferHeight = 0;
void *BufferMemory = 0;
int   BufferMemorySize = 0;
BITMAPINFO BitmapInfo = {0};
int   PixelSize = 16;

void
ClearScreen(void)
{
    int PixelIndex;
    for(PixelIndex = 0;
        PixelIndex < BufferWidth*BufferHeight;
        ++PixelIndex)
    {
        ((u32 *)BufferMemory)[PixelIndex] = 0x00000000;
    }
}

void
DrawPixel(u32 X, u32 Y, u32 Color)
{
    u32 PixelIndex = (Y*BufferWidth + X) % ((u32)BufferWidth*(u32)BufferHeight);
    ((u32 *)BufferMemory)[PixelIndex] = Color;
}

u32
GetPixelColor(u32 X, u32 Y)
{
    u32 PixelIndex = Y*BufferWidth + X;
    return ((u32 *)BufferMemory)[PixelIndex];
}

/*********************************************************/
/**                        CHIP-8                       **/
/*********************************************************/

#define CHIP8_REGS 16
#define CHIP8_MEM_SIZE 0x1000
#define CHIP8_SCR_W 64
#define CHIP8_SCR_H 32
#define CHIP8_ENTRY 0x200
#define CHIP8_KEYS_NUM 16
#define CHIP8_STACK_SIZE 16
#define CHIP8_FONT_ADDR 0x0000
#define CHIP8_TIMER_FREQ_HZ 60
#define CHIP8_FREQ_HZ 500

typedef struct
chip8
{
    u8 V[CHIP8_REGS];
    u16 I;
    u16 PC;
    u8 DT;
    u8 ST;

    u8 Keys[CHIP8_KEYS_NUM];

    u16 Stack[CHIP8_STACK_SIZE];
    u8 SP;

    u8 (*MemRead)(u16);
    void (*MemWrite)(u16, u8);
} chip8;

u8
Fetch(chip8 *Chip8)
{
    u8 Val;

    Val = Chip8->MemRead(Chip8->PC);
    Chip8->PC += 1;

    return(Val);
}

u16
Fetch16(chip8 *Chip8)
{
    u16 Val;
    u8 Hi, Lo;

    Hi = Fetch(Chip8);
    Lo = Fetch(Chip8);
    Val = ((((u16)Hi&0x00ff) << 8) | ((u16)Lo&0x00ff));

    return(Val);
}

void
Execute(chip8 *Chip8)
{
#define GET_nnn(o) (((o)&0x0fff) >> 0)
#define GET_n(o)   (((o)&0x000f) >> 0)
#define GET_xh(o)  (((o)&0xf000) >> 12)
#define GET_xl(o)  (((o)&0x0f00) >> 8)
#define GET_yh(o)  (((o)&0x00f0) >> 4)
#define GET_hi(o)  (((o)&0xff00) >> 8)
#define GET_lo(o)  (((o)&0x00ff) >> 0)

    u16 Ins;
    u16 Ans;

    u16 nnn;
    u8 op, x, y, kk, n;

    Ins = Fetch16(Chip8);

    nnn = GET_nnn(Ins);
    op = GET_xh(Ins);
    x = GET_xl(Ins);
    y = GET_yh(Ins);
    kk = GET_lo(Ins);
    n = GET_n(Ins);

    switch(op)
    {
        // CLS, RET
        case 0x0:
        {
            // CLS
            if(Ins == 0x00e0)
            {
                ClearScreen();
            }
            // RET
            else if(Ins == 0x00ee)
            {
                Chip8->PC = Chip8->Stack[Chip8->SP];
                Chip8->SP -= 1;
            }
        } break;

        // JP
        case 0x1: { Chip8->PC = nnn; } break;

        // CALL
        case 0x2:
        {
            Chip8->SP += 1;
            Chip8->Stack[Chip8->SP] = Chip8->PC;
            Chip8->PC = nnn;
        } break;

        // SE Vx,byte
        case 0x3: { if(Chip8->V[x] == kk) Chip8->PC += 2; } break;

        // SNE Vx,byte
        case 0x4: { if(Chip8->V[x] != kk) Chip8->PC += 2; } break;

        // SE Vx,Vy
        case 0x5: { if(Chip8->V[x] == Chip8->V[y]) Chip8->PC += 2; } break;

        // LD Vx,byte
        case 0x6: { Chip8->V[x] = kk; } break;

        // ADD Vx,byte
        case 0x7: { Chip8->V[x] += kk; } break;

        // LD,OR,AND,XOR,ADD,SUB,SHR,SUBN,SHL
        case 0x8:
        {
                 if(n == 0x0) Chip8->V[x] = Chip8->V[y];
            else if(n == 0x1) Chip8->V[x] |= Chip8->V[y];
            else if(n == 0x2) Chip8->V[x] &= Chip8->V[y];
            else if(n == 0x3) Chip8->V[x] ^= Chip8->V[y];
            else if(n == 0x4)
            {
                Ans = (u16)Chip8->V[x] + (u16)Chip8->V[y];
                Chip8->V[x] = (u8)(Ans&0xff);
                Chip8->V[0xf] = (Ans > 0xff) ? 1 : 0;
            }
            else if(n == 0x5)
            {
                Ans = (u16)Chip8->V[x] - (u16)Chip8->V[y];
                Chip8->V[0xf] = (Chip8->V[x] > Chip8->V[y]) ? 1 : 0;
                Chip8->V[x] = (u8)(Ans&0xff);
            }
            else if(n == 0x6)
            {
#if 0
                Chip8->V[x] = Chip8->V[y];
#endif
                Chip8->V[0xf] = (Chip8->V[x] & 0x1) ? 1 : 0;
                Chip8->V[x] >>= 1;
            }
            else if(n == 0x7)
            {
                Ans = (u16)Chip8->V[y] - (u16)Chip8->V[x];
                Chip8->V[0xf] = (Chip8->V[y] > Chip8->V[x]) ? 1 : 0;
                Chip8->V[x] = (u8)(Ans&0xff);
            }
            else if(n == 0xe)
            {
#if 0
                Chip8->V[x] = Chip8->V[y];
#endif
                Chip8->V[0xf] = (Chip8->V[x] & 0x80) ? 1 : 0;
                Chip8->V[x] <<= 1;
            }
        } break;

        // SNE Vx,Vy
        case 0x9: { if(Chip8->V[x] != Chip8->V[y]) Chip8->PC += 2; } break;

        // LD I,addr
        case 0xa: { Chip8->I = nnn; } break;

        // JP V0,addr
        case 0xb:
        {
#if 0
            Chip8->PC = Chip8->V[x] + nnn;
#else
            Chip8->PC = Chip8->V[0] + nnn;
#endif
        } break;

        // RND Vx,byte
        case 0xc: { Chip8->V[x] = GetRandom() & kk; } break;

        // DRW Vx,Vy,nibble
        case 0xd:
        {
            u8 Line;
            b32 Collision = 0;
            u32 Color = 0, PrevColor = 0;
            u32 CordX = (u32)Chip8->V[x] % CHIP8_SCR_W;
            u32 CordY = (u32)Chip8->V[y] % CHIP8_SCR_H;
            for(u8 Index = 0;
                Index < n;
                ++Index)
            {
                Line = Chip8->MemRead(Chip8->I + Index);

                for(u8 BitIndex = 0;
                    BitIndex < 8;
                    ++BitIndex)
                {
                    if(CordX+BitIndex < CHIP8_SCR_W && CordY < CHIP8_SCR_H)
                    {
                        PrevColor = GetPixelColor(CordX+BitIndex, CordY);
                        Color = (Line & ((u8)1 << (7 - (u8)BitIndex))) ? 0xffffffff : 0x00000000;
                        if(Color != 0 && PrevColor != 0)
                        {
                            Color = 0;
                            Collision = 1;
                            DrawPixel(CordX+BitIndex, CordY, Color);
                        }
                        else if(Color != 0 && PrevColor == 0)
                        {
                            DrawPixel(CordX+BitIndex, CordY, Color);
                        }
                    }
                }

                ++CordY;
            }
            Chip8->V[0xf] = (Collision) ? 1 : 0;
        } break;

        // SKP,SKNP
        case 0xe:
        {
            if(kk == 0x9e)
            {
                if(Chip8->Keys[Chip8->V[x]] != 0) Chip8->PC += 2;
            }
            else if(kk == 0xa1)
            {
                if(Chip8->Keys[Chip8->V[x]] == 0) Chip8->PC += 2;
            }
        } break;

        // LD Vx,DT
        // LD Vx,K
        // LD DT,Vx
        // LD ST,Vx
        // ADD I,Vx
        // LD F,Vx
        // LD B,Vx
        // LD [I],Vx
        // LD Vx,[I]
        case 0xf:
        {
            if(kk == 0x07)
            {
                Chip8->V[x] = Chip8->DT;
            }
            else if(kk == 0x0a)
            {
                b32 IsAnyKeyPressed = 0;
                u32 Index;

                for(Index = 0;
                    Index < CHIP8_KEYS_NUM;
                    ++Index)
                {
                    if(Chip8->Keys[Index])
                    {
                        IsAnyKeyPressed = 1;
                        break;
                    }
                }

                if(IsAnyKeyPressed)
                {
                    Chip8->V[x] = (u8)(Index & 0xff);
                }
                else
                {
                    Chip8->PC -= 2;
                }
            }
            else if(kk == 0x15)
            {
                Chip8->DT = Chip8->V[x];
            }
            else if(kk == 0x18)
            {
                Chip8->ST = Chip8->V[x];
            }
            else if(kk == 0x1e)
            {
                Chip8->I += (u16)Chip8->V[x];
                if(Chip8->I >= CHIP8_MEM_SIZE)
                {
                    Chip8->V[0xf] = 1;
                }
            }
            else if(kk == 0x29)
            {
                Chip8->I = CHIP8_FONT_ADDR + (u16)Chip8->V[x]*5;
            }
            else if(kk == 0x33)
            {
                Chip8->MemWrite(Chip8->I+0, (Chip8->V[x]/100) % 10);
                Chip8->MemWrite(Chip8->I+1, (Chip8->V[x]/10)  % 10);
                Chip8->MemWrite(Chip8->I+2, (Chip8->V[x]/1)   % 10);
            }
            else if(kk == 0x55)
            {
                for(u16 Index = 0;
                    Index < x + 1;
                    ++Index)
                {
                    Chip8->MemWrite(Chip8->I+Index, Chip8->V[Index]);
                }
#if 0
                Chip8->I += CHIP8_REGS;
#endif
            }
            else if(kk == 0x65)
            {
                for(u16 Index = 0;
                    Index < x + 1;
                    ++Index)
                {
                    Chip8->V[Index] = Chip8->MemRead(Chip8->I+Index);
                }
#if 0
                Chip8->I += CHIP8_REGS;
#endif
            }
        } break;

        default:
        {
            // TODO: How to handle this
        } break;
    }

#undef GET_lo
#undef GET_hi
#undef GET_yh
#undef GET_xl
#undef GET_xh
#undef GET_n
#undef GET_nnn
}

/*********************************************************/
/**                         MAIN                        **/
/*********************************************************/

#include <windows.h>

#if 0
int _fltused = 0;
#endif

b32 GlobalRunning;
chip8 GlobalChip8 = {0};

LRESULT CALLBACK
Win32WindowCallback(
    HWND Window,
    UINT Message,
    WPARAM WParam,
    LPARAM LParam)
{
    LRESULT Result = 0;

    switch(Message)
    {
        case WM_CLOSE:
        case WM_DESTROY:
        {
            GlobalRunning = 0;
        } break;

        case WM_PAINT:
        {
            PAINTSTRUCT Paint;
            HDC DeviceContext = BeginPaint(Window, &Paint);
            StretchDIBits(
                DeviceContext,
                0, 0, BufferWidth, BufferHeight,
                0, 0, BufferWidth, BufferHeight,
                BufferMemory,
                &BitmapInfo,
                DIB_RGB_COLORS, SRCCOPY);
            EndPaint(Window, &Paint);
            OutputDebugStringA("WM_PAINT");
        } break;

        case WM_KEYDOWN:
        {
            if(WParam >= 0x30 && WParam <= 0x39)
            {
                GlobalChip8.Keys[WParam - 0x30] = 1;
            }
            else if(WParam >= 0x41 && WParam <= 0x46)
            {
                GlobalChip8.Keys[WParam - 0x41 + 10] = 1;
            }
            OutputDebugStringA("WM_KEYDOWN");
        } break;

        case WM_KEYUP:
        {
            if(WParam >= 0x30 && WParam <= 0x39)
            {
                GlobalChip8.Keys[WParam - 0x30] = 0;
            }
            else if(WParam >= 0x41 && WParam <= 0x46)
            {
                GlobalChip8.Keys[WParam - 0x41 + 10] = 0;
            }
            OutputDebugStringA("WM_KEYUP");
        } break;

        default:
        {
            Result = DefWindowProcA(Window, Message, WParam, LParam);
        } break;
    }

    return(Result);
}

u64
Win32PerformanceFrequency(void)
{
    u64 Result;
    LARGE_INTEGER LargeInt;

    QueryPerformanceFrequency(&LargeInt);
    Result = LargeInt.QuadPart;

    return(Result);
}

u64
Win32GetTickCount(void)
{
    u64 Result;
    LARGE_INTEGER LargeInt;

    QueryPerformanceCounter(&LargeInt);
    Result = LargeInt.QuadPart;

    return(Result);
}

u8 Memory[CHIP8_MEM_SIZE];

u8
MemRead(u16 Address)
{
    u8 Val;
    Val = Memory[Address % CHIP8_MEM_SIZE];
    return(Val);
}

void
MemWrite(u16 Address, u8 Value)
{
    Memory[Address % CHIP8_MEM_SIZE] = Value;
}

u8
Chip8Font[] = {
    0xf0, 0x90, 0x90, 0x90, 0xf0,
    0x20, 0x60, 0x20, 0x20, 0x70,
    0xF0, 0x10, 0xF0, 0x80, 0xF0,
    0xF0, 0x10, 0xF0, 0x10, 0xF0,
    0x90, 0x90, 0xF0, 0x10, 0x10,
    0xF0, 0x80, 0xF0, 0x10, 0xF0,
    0xF0, 0x80, 0xF0, 0x90, 0xF0,
    0xF0, 0x10, 0x20, 0x40, 0x40,
    0xF0, 0x90, 0xF0, 0x90, 0xF0,
    0xF0, 0x90, 0xF0, 0x10, 0xF0,
    0xF0, 0x90, 0xF0, 0x90, 0x90,
    0xE0, 0x90, 0xE0, 0x90, 0xE0,
    0xF0, 0x80, 0x80, 0x80, 0xF0,
    0xE0, 0x90, 0x90, 0x90, 0xE0,
    0xF0, 0x80, 0xF0, 0x80, 0xF0,
    0xF0, 0x80, 0xF0, 0x80, 0x80,
};

DWORD WINAPI
DecTimers(LPVOID Param)
{
    chip8 *Chip8 = (chip8 *)Param;

    while(GlobalRunning)
    {
        Sleep((DWORD)((1000.0f/CHIP8_TIMER_FREQ_HZ)));
        if(Chip8->DT > 0)
        {
            Chip8->DT -= 1;
        }
        if(Chip8->ST > 0)
        {
            // TODO: Emit a beeping sound as long as ST > 0
            Chip8->ST -= 1;
        }
    }

    return(0);
}

int WINAPI
Win32Main(HINSTANCE Instance, HINSTANCE PrevInstance, PSTR CmdLine, INT CmdShow)
{
    UNREFERENCED_PARAMETER(PrevInstance);
    UNREFERENCED_PARAMETER(CmdLine);
    UNREFERENCED_PARAMETER(CmdShow);

    CmdLine = GetCommandLineA();
    char *CmdLinePtr = CmdLine;
    while(*CmdLinePtr && !(*CmdLinePtr == ' ' || *CmdLinePtr == '\t'))
        ++CmdLinePtr;

    while((*CmdLinePtr == ' ' || *CmdLinePtr == '\t'))
        ++CmdLinePtr;

    char *RomFileName = CmdLinePtr;

    // Create window
#if 0
    HINSTANCE Instance = GetModuleHandle(0);
#endif
    char *WindowName = "chip8";
    WNDCLASSA WindowClass = {0};
    WindowClass.style         = CS_HREDRAW|CS_VREDRAW|CS_OWNDC;
    WindowClass.lpfnWndProc   = Win32WindowCallback;
    WindowClass.hInstance     = Instance;
    WindowClass.lpszClassName = WindowName;
    WindowClass.hbrBackground = CreateSolidBrush(RGB(255, 0, 255));
    if(!RegisterClass(&WindowClass))
    {
        ExitProcess(1);
    }
    HWND Window = CreateWindowExA(
        0, WindowName, WindowName,
        WS_OVERLAPPEDWINDOW|WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT,
        CW_USEDEFAULT, CW_USEDEFAULT,
        0, 0, Instance, 0);
    if(!Window)
    {
        ExitProcess(1);
    }

    // Create screen buffer
    BufferWidth  = CHIP8_SCR_W;
    BufferHeight = CHIP8_SCR_H;
    BitmapInfo.bmiHeader.biSize        = sizeof(BitmapInfo.bmiHeader);
    BitmapInfo.bmiHeader.biWidth       = BufferWidth;
    BitmapInfo.bmiHeader.biHeight      = BufferHeight*(-1);
    BitmapInfo.bmiHeader.biPlanes      = 1;
    BitmapInfo.bmiHeader.biBitCount    = 32;
    BitmapInfo.bmiHeader.biCompression = BI_RGB;
    BufferMemorySize = (BufferWidth*BufferHeight)*4;
    BufferMemory     = VirtualAlloc(
        0, BufferMemorySize,
        MEM_RESERVE|MEM_COMMIT,
        PAGE_READWRITE);
    if(!BufferMemory)
    {
        ExitProcess(1);
    }
    ClearScreen();

    // Resize the window to fit the screen buffer
    RECT Rect = {0};
    if(!GetWindowRect(Window, &Rect))
    {
        ExitProcess(1);
    }
    Rect.right  = Rect.left + BufferWidth*PixelSize;
    Rect.bottom = Rect.top  + BufferHeight*PixelSize;
    if(!AdjustWindowRect(&Rect, WS_OVERLAPPEDWINDOW|WS_VISIBLE, 0))
    {
        ExitProcess(1);
    }
    if(!SetWindowPos(
        Window, 0,
        Rect.left, Rect.top,
        Rect.right - Rect.left,
        Rect.bottom - Rect.top, 0))
    {
        ExitProcess(1);
    }

    GlobalChip8.MemRead = &MemRead;
    GlobalChip8.MemWrite = &MemWrite;
    GlobalChip8.PC = CHIP8_ENTRY;

#if 0
    for(u32 Index = 0;
        Index < 12;
        ++Index)
    {
        // V1 = Index*5
        Memory[CHIP8_ENTRY + Index*10 + 0] = 0x61;
        Memory[CHIP8_ENTRY + Index*10 + 1] = (u8)Index*5;

        // V2 = 0
        Memory[CHIP8_ENTRY + Index*10 + 2] = 0x62;
        Memory[CHIP8_ENTRY + Index*10 + 3] = 0x01;

        // V3 = Index
        Memory[CHIP8_ENTRY + Index*10 + 4] = 0x63;
        Memory[CHIP8_ENTRY + Index*10 + 5] = (u8)Index;

        // I = font_addr(Index)
        Memory[CHIP8_ENTRY + Index*10 + 6] = 0xf3;
        Memory[CHIP8_ENTRY + Index*10 + 7] = 0x29;

        // Draw(V1, V2, 5)
        Memory[CHIP8_ENTRY + Index*10 + 8] = 0xd1;
        Memory[CHIP8_ENTRY + Index*10 + 9] = 0x25;
    }
#else
    size_t RomSize;
    u8 *Rom = (u8 *)ez_file_read_bin(RomFileName, &RomSize);
    for(size_t Index = 0;
        Index < RomSize;
        ++Index)
    {
        Memory[CHIP8_ENTRY + Index] = Rom[Index];
    }
#endif


    for(u32 Index = 0;
        Index < ArrayCount(Chip8Font);
        ++Index)
    {
        Memory[CHIP8_FONT_ADDR + Index] = Chip8Font[Index];
    }

    // Main loop
    timeBeginPeriod(1); // Set sleep granularity to 1ms
    DWORD DecTimersThreadId;
    HANDLE DecTimersHandle = CreateThread(0, 0, DecTimers, (LPVOID)(&GlobalChip8), 0, &DecTimersThreadId);
    GlobalRunning = 1;
    u64 ClockFrequency = Win32PerformanceFrequency();
    u64 ClockStart = 0, ClockFinish = 0;
    r32 TargetMsPerFrame = (1.0f/(r32)CHIP8_FREQ_HZ)*1000.f;
    r32 ElapsedMs;
    while(GlobalRunning)
    {
        // Time
        ElapsedMs = (((r32)ClockFinish - (r32)ClockStart) * 1000.f)/ClockFrequency;
        if(TargetMsPerFrame > ElapsedMs)
        {
#if 1
            DWORD SleepMs = (DWORD)(TargetMsPerFrame - ElapsedMs);
            Sleep(SleepMs);
#endif
        }
        ClockStart = Win32GetTickCount();

        // Input handling
        MSG Message;
        while(PeekMessageA(&Message, 0, 0, 0, PM_REMOVE))
        {
            TranslateMessage(&Message);
            DispatchMessageA(&Message);
        }

        // Console emulation
        Execute(&GlobalChip8);

        // Screen buffer rendering
        HDC DeviceContext = GetDC(Window);
        int LinesCopied = StretchDIBits(
            DeviceContext,
            0, 0, BufferWidth*PixelSize, BufferHeight*PixelSize,
            0, 0, BufferWidth, BufferHeight,
            BufferMemory, &BitmapInfo,
            DIB_RGB_COLORS, SRCCOPY);
        if(!LinesCopied)
        {
            DWORD LastError = GetLastError();
            ExitProcess(LastError);
        }
        ReleaseDC(Window, DeviceContext);

        ClockFinish = Win32GetTickCount();
    }

    // Exit
    CloseHandle(DecTimersHandle);
    return(0);
}
