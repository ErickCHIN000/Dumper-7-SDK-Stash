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

// 0xA (0xA - 0x0)
// Function BP_HitVisualActor.BP_HitVisualActor_C.UpdateNiagaraShadows
struct ABP_HitVisualActor_C_UpdateNiagaraShadows_Params
{
public:
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShadowsSetting                   CallFunc_GetShadows_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_HitVisualActor.BP_HitVisualActor_C.OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9
struct ABP_HitVisualActor_C_OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D8 (0x2D8 - 0x0)
// Function BP_HitVisualActor.BP_HitVisualActor_C.ExecuteUbergraph_BP_HitVisualActor
struct ABP_HitVisualActor_C_ExecuteUbergraph_BP_HitVisualActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1BE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x40)(HasGetValueTypeHash)
	struct FSurfacesRowHandle                    CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue; // 0xA0(0x18)(NoDestructor, HasGetValueTypeHash)
	class UIcarusGameUserSettings*               CallFunc_GetIcarusGameUserSettings_ReturnValue;    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSurfacesData                         CallFunc_GetSurfacesStruct_Surfaces;               // 0xC0(0xA8)(None)
	enum class EValid                            CallFunc_GetSurfacesStruct_Paths;                  // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowBloodEffects_ReturnValue;          // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x178(0x18)(None)
	class UNiagaraSystem*                        CallFunc_GetAsset_ReturnValue;                     // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x198(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue_1;          // 0x1D8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1F0(0x40)(HasGetValueTypeHash)
	struct FSurfacesRowHandle                    CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue_1; // 0x230(0x18)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x248(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x260(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2A0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2B0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


