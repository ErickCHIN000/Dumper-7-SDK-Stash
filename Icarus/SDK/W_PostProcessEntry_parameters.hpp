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

// 0x1D (0x1D - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.IsEntryEnabled
struct UW_PostProcessEntry_C_IsEntryEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsRowHandle               CallFunc_StructToRowHandle_ReturnValue;            // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFeatureLevelEnabled_ReturnValue;        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.InitFromSaveGameValue
struct UW_PostProcessEntry_C_InitFromSaveGameValue_Params
{
public:
	struct FFPostProcessSaveData                 Value;                                             // 0x0(0x5)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C65[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.GetSaveGameValue
struct UW_PostProcessEntry_C_GetSaveGameValue_Params
{
public:
	struct FFPostProcessSaveData                 Value;                                             // 0x0(0x5)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C85[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x560 (0x560 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.UpdatePostProcess
struct UW_PostProcessEntry_C_UpdatePostProcess_Params
{
public:
	struct FPostProcessSettings                  Settings;                                          // 0x0(0x560)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.PreConstruct
struct UW_PostProcessEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.ExecuteUbergraph_W_PostProcessEntry
struct UW_PostProcessEntry_C_ExecuteUbergraph_W_PostProcessEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeatureLevelsRowHandle               CallFunc_StructToRowHandle_ReturnValue;            // 0x8(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFeatureLevelEnabled_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_PostProcessEntry.W_PostProcessEntry_C.EntryFunction__DelegateSignature
struct UW_PostProcessEntry_C_EntryFunction__DelegateSignature_Params
{
public:
	class FString                                Param;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


