#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4B8 - 0x4A0)
// BlueprintGeneratedClass MirageComponent.MirageComponent_C
class UMirageComponent_C : public UTTLMirageComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	TArray<class ATTLAIController*>              SpawnControllers;                                  // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMirageComponent_C* GetDefaultObj();

	bool SpawnMirageBP(TSubclassOf<class ATTLAIController> MirageController, bool TriggeredLeft, bool TriggeredRight, float Femto, bool CallFunc_SpawnMirage_SuccessMirage);
	void InitializeBP(class ACharacter* Character, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess);
	void SpawnMirage(class UClass* MirageController, bool TriggeredLeft, bool TriggeredRight, float Femto, bool* SuccessMirage, bool CallFunc_CanMirage_ReturnValue);
	void ServerSpawnMirage(class UClass* MirageController, bool ToggledLeft, bool ToggledRight, float Femto);
	void MulticastSpawnMirage(float Femto);
	void ProcessSpawn(int32 ControllerIndex);
	void ExecuteUbergraph_MirageComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTTLArsenalPartsInfoList& CallFunc_GetCurrentArsenalPartsList_OutArsenalPartsInfoList, bool CallFunc_GetCurrentArsenalPartsList_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AMirageCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTTLArsenalPartsInfoList& K2Node_Select_Default, class UClass* K2Node_CustomEvent_MirageController, bool K2Node_CustomEvent_ToggledLeft, bool K2Node_CustomEvent_ToggledRight, float K2Node_CustomEvent_femto1, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, float K2Node_CustomEvent_femto, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ATTLAIController* CallFunc_FinishSpawningActor_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class AOldMirageTemplate_C* K2Node_DynamicCast_AsOld_Mirage_Template, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_Event_ControllerIndex, int32 CallFunc_Array_Add_ReturnValue2, class ATTLAIController* CallFunc_Array_Get_Item, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess2);
};

}


