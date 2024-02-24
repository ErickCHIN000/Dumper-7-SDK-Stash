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

// 0x59 (0x59 - 0x0)
// Function ShieldAug_CursedWit.ShieldAug_CursedWit_C.K2_OnShieldEquipped
struct UShieldAug_CursedWit_C_K2_OnShieldEquipped_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         Equipper;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAugmentData                          StackData;                                         // 0x10(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	TScriptInterface<class IBPI_CursedWit_C>     K2Node_DynamicCast_AsBPI_Cursed_Wit;               // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function ShieldAug_CursedWit.ShieldAug_CursedWit_C.K2_OnShieldNotDepleted
struct UShieldAug_CursedWit_C_K2_OnShieldNotDepleted_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	struct FAugmentData                          StackData;                                         // 0x20(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x58(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function ShieldAug_CursedWit.ShieldAug_CursedWit_C.K2_OnShieldUnequipped
struct UShieldAug_CursedWit_C_K2_OnShieldUnequipped_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         Equipper;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAugmentData                          StackData;                                         // 0x10(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	TScriptInterface<class IBPI_CursedWit_C>     K2Node_DynamicCast_AsBPI_Cursed_Wit;               // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x60(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E0 (0x2E0 - 0x0)
// Function ShieldAug_CursedWit.ShieldAug_CursedWit_C.K2_OnShieldDepleted
struct UShieldAug_CursedWit_C_K2_OnShieldDepleted_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	struct FAugmentData                          StackData;                                         // 0x20(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x58(0x218)(None)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x270(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x2A8(0x18)(NoDestructor, ContainsInstancedReference)
	struct FDialogConversation                   CallFunc_FinishTriggerDialog_Conversation;         // 0x2C0(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishTriggerDialog_SequenceID;           // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishTriggerDialog_ReturnValue;          // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakDialogComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x2D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F9 (0x2F9 - 0x0)
// Function ShieldAug_CursedWit.ShieldAug_CursedWit_C.K2_OnDamageTaken
struct UShieldAug_CursedWit_C_K2_OnDamageTaken_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAugmentData                          StackData;                                         // 0x8(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	class UDamageComponent*                      DamageReceiver;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         DamageSource;                                      // 0x58(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageCauserComponent*                DamageCauser;                                      // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReceivedDamageDetails                Details;                                           // 0x70(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0xC8(0x218)(None)
	class UOakDialogComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x2E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   CallFunc_FinishTriggerDialog_Conversation;         // 0x2E8(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishTriggerDialog_SequenceID;           // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishTriggerDialog_ReturnValue;          // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


