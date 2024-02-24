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

// 0x10 (0x10 - 0x0)
// Function BP_Achievement_FrenchFika.BP_Achievement_FrenchFika_C.On Lick
struct ABP_Achievement_FrenchFika_C_On_Lick_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LickedActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Achievement_FrenchFika.BP_Achievement_FrenchFika_C.On Headbutt
struct ABP_Achievement_FrenchFika_C_On_Headbutt_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HeadbuttedActor;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEA (0xEA - 0x0)
// Function BP_Achievement_FrenchFika.BP_Achievement_FrenchFika_C.ExecuteUbergraph_BP_Achievement_FrenchFika
struct ABP_Achievement_FrenchFika_C_ExecuteUbergraph_BP_Achievement_FrenchFika_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat_1;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_LickedActor;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PActor_Base_C*                     K2Node_DynamicCast_AsBP_PActor_Base;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_97E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_981[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface;      // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_98D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetGoatSimName_ReturnValue;               // 0x50(0x18)(None)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGAchievementSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGlobalEventHandler*                 CallFunc_GetGlobalEventHandler_ReturnValue;        // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_HeadbuttedActor;                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGAchievementSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PActor_Base_C*                     K2Node_DynamicCast_AsBP_PActor_Base_1;             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface_1;    // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_1;      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGoatSimName_ReturnValue_1;             // 0xD0(0x18)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


