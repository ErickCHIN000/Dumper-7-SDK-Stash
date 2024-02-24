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

// 0x4D (0x4D - 0x0)
// Function ActionSkill_Barbarian_Whirlwind.ActionSkill_Barbarian_Whirlwind_C.K2_CanRetrigger
struct UActionSkill_Barbarian_Whirlwind_C_K2_CanRetrigger_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_109D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         K2Node_DynamicCast_AsOak_Character;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            CallFunc_GetResourcePoolByResource_ReturnValue;    // 0x20(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakResourcePoolReference_bValid;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakResourcePoolReference_CurrentValue;  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakResourcePoolReference_MinValue;      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakResourcePoolReference_MaxValue;      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5D1 (0x5D1 - 0x0)
// Function ActionSkill_Barbarian_Whirlwind.ActionSkill_Barbarian_Whirlwind_C.ExecuteUbergraph_ActionSkill_Barbarian_Whirlwind
struct UActionSkill_Barbarian_Whirlwind_C_ExecuteUbergraph_ActionSkill_Barbarian_Whirlwind_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1134[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x10(0x218)(None)
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player;               // 0x228(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_113C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue1;            // 0x240(0x218)(None)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1140[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishTriggerDialog_Conversation;         // 0x45C(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishTriggerDialog_SequenceID;           // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishTriggerDialog_ReturnValue;          // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1142[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishTriggerDialog_Conversation1;        // 0x470(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishTriggerDialog_SequenceID1;          // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishTriggerDialog_ReturnValue1;         // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue1;             // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakResourcePoolReference_bValid;        // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1146[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakResourcePoolReference_CurrentValue;  // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakResourcePoolReference_MinValue;      // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakResourcePoolReference_MaxValue;      // 0x49C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue2;             // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue3;             // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x4C0(0x38)(NoDestructor)
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player1;              // 0x4F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1150[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x510(0x18)(NoDestructor, ContainsInstancedReference)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x528(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue4;             // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue5;             // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         K2Node_DynamicCast_AsOak_Character;                // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_115B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player2;              // 0x560(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_115C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            CallFunc_GetResourcePoolByResource_ReturnValue;    // 0x578(0x18)(NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            CallFunc_GetResourcePoolByResource_ReturnValue1;   // 0x590(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PauseActionSkillDuration_Res;             // 0x5A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UnpauseActionSkillDuration_Res;           // 0x5AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1164[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x5B0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakAction_Anim_ActionAbility*         K2Node_DynamicCast_AsOak_Action_Ability_Anim_Action; // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


