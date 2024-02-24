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

// 0x8 (0x8 - 0x0)
// Function PersistentLevel.PersistentLevel_C.Event_LoadLevel
struct APersistentLevel_C_Event_LoadLevel_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function PersistentLevel.PersistentLevel_C.ExecuteUbergraph_PersistentLevel
struct APersistentLevel_C_ExecuteUbergraph_PersistentLevel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEMSAsyncWait*                         CallFunc_AsyncWaitForOperation_ReturnValue;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_LevelName;                      // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance_1;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USave_FirstLoadGame_C*                 CallFunc_GetCustomSave_ReturnValue;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance_2;               // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance_3;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USave_FirstLoadGame_C*                 CallFunc_GetCustomSave_ReturnValue_1;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USD_GameInstance_C*                    CallFunc_GetGameInstance_Instance_4;               // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULoadingScreenWidget_C*                CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PersistentLevel.PersistentLevel_C.GetLevelName__DelegateSignature
struct APersistentLevel_C_GetLevelName__DelegateSignature_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


