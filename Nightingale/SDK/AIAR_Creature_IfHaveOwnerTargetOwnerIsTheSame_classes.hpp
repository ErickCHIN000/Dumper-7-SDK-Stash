#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA0 - 0x90)
// BlueprintGeneratedClass AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame.AIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C
class UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C : public UAIActionRequirement
{
public:
	class AAIC_CreatureBase_C*                   AIController;                                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    BPCharacter;                                       // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAR_Creature_IfHaveOwnerTargetOwnerIsTheSame_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, const class FString& OwnerPersistentID, class AActor* LTarget, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* Temp_object_Variable, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, class UObject* Temp_object_Variable_1, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesImplementInterface_ReturnValue, class UObject* CallFunc_GetOwnershipObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_GetOwnershipObject_ReturnValue_1);
	bool Initialize(class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_1);
};

}


