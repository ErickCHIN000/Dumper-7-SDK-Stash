#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// Function wid_Benchmark_Summary.wid_Benchmark_Summary_C.SetNextBenchmarkTime
struct UWid_Benchmark_Summary_C_SetNextBenchmarkTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
};

// 0x3C (0x3C - 0x0)
// Function wid_Benchmark_Summary.wid_Benchmark_Summary_C.Tick
struct UWid_Benchmark_Summary_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Benchmark_Summary.wid_Benchmark_Summary_C.SetBenchmarkActor
struct UWid_Benchmark_Summary_C_SetBenchmarkActor_Params
{
public:
	class Abp_Benchmark_C*                       BActor;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x750 (0x750 - 0x0)
// Function wid_Benchmark_Summary.wid_Benchmark_Summary_C.ExecuteUbergraph_wid_Benchmark_Summary
struct UWid_Benchmark_Summary_C_ExecuteUbergraph_wid_Benchmark_Summary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E4A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	bool                                         Temp_bool_Variable_4;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	bool                                         Temp_bool_Variable_7;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x70(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x88(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_Benchmark_C*                       K2Node_Event_BActor;                               // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalAvarageFPS_ReturnValue;           // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_1;           // 0xD8(0x18)(None)
	float                                        CallFunc_GetMinFPS_ReturnValue;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxFPS_ReturnValue;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_2;           // 0xF8(0x18)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_3;           // 0x110(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x128(0x18)(None)
	float                                        CallFunc_GetTotalAvarageFPS_ReturnValue_1;         // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMinFPS_ReturnValue_1;                  // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxFPS_ReturnValue_1;                  // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x150(0x18)(None)
	float                                        CallFunc_GetOnePercentAvarageFPS_Result;           // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBenchmarkFinalResult                 K2Node_MakeStruct_BenchmarkFinalResult;            // 0x16C(0x10)(NoDestructor)
	uint8                                        Pad_1EC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_5;                              // 0x180(0x18)(None)
	struct FBenchmarkHardware                    CallFunc_BenchmarkHardware_ReturnValue;            // 0x198(0x28)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1C0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1D8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1F0(0x18)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_4;           // 0x208(0x18)(None)
	class FString                                CallFunc_GetGameVersionString_ReturnValue;         // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x230(0x18)(None)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRTSetting_ReturnValue;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x258(0x18)(None)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x275(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x276(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F16[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x27D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x27E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x27F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetScreenPercentage_ReturnValue;          // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_5;           // 0x2A8(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x2C0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFovValue_ReturnValue;                  // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x310(0x18)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_6;           // 0x328(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x340(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDefaultResolution_ReturnValue;         // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFrameRateLimit_ReturnValue;            // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_2;                         // 0x380(0x18)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_7;           // 0x3A8(0x18)(None)
	bool                                         CallFunc_IsVSyncEnabled_ReturnValue;               // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x3C8(0x18)(None)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue_1;          // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x3E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_3;                         // 0x428(0x18)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_4;           // 0x440(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_5;           // 0x450(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_6;           // 0x470(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x488(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2006[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MinOfIntArray_IndexOfMinValue;            // 0x49C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MinOfIntArray_MinValue;                   // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MaxOfIntArray_IndexOfMaxValue;            // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MaxOfIntArray_MaxValue;                   // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             K2Node_Select_Default_2;                           // 0x4AC(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x4B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x4B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x4B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x4B7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Array_Get_Item_4;                         // 0x4B8(0x18)(None)
	struct FIntPoint                             K2Node_Select_Default_3;                           // 0x4D0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       Temp_byte_Variable_6;                              // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_7;           // 0x4E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_4;                           // 0x4F0(0x18)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_8;           // 0x508(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x518(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x528(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x538(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_5;                         // 0x548(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x560(0x18)(None)
	class FText                                  K2Node_Select_Default_5;                           // 0x578(0x18)(None)
	class FText                                  K2Node_Select_Default_6;                           // 0x590(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x5A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_6;          // 0x5B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_6;                         // 0x5C8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x5E0(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_7;                         // 0x5F8(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_8;                         // 0x610(0x18)(None)
	class FName                                  CallFunc_GetCurrentPersistantLevel_ReturnValue;    // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x638(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EUDLSSMode                        CallFunc_GetDLSSMode_ReturnValue;                  // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_205F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_7;                           // 0x652(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0x653(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_206C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x658(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_7;          // 0x670(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_8;          // 0x680(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x690(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_9;          // 0x6A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_7;                              // 0x6B8(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x6D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x6E0(0x18)(None)
	class FText                                  CallFunc_Array_Get_Item_9;                         // 0x6F8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_10;         // 0x710(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_9;                           // 0x728(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_11;         // 0x740(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


