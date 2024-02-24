#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EQC_POI.EQC_POI_C
class UEQC_POI_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEQC_POI_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class UNWXAIPOI_Component* Temp_object_Variable, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetSpawnerActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* Temp_object_Variable_1, TScriptInterface<class IAIPPOIInteractionInterface> K2Node_DynamicCast_AsAIPPOIInteraction_Interface, bool K2Node_DynamicCast_bSuccess_1, class UNWXAIPOI_Component* CallFunc_GetCurrentPOIImplementer_ReturnValue);
};

}


