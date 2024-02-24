#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureResourcesObject.BP_StructureResourcesObject_C
class UBP_StructureResourcesObject_C : public UStructureObjectComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureResourcesObject_C* GetDefaultObj();

	void GetTotalResourceRequirements(class UObject* Structure, TArray<struct FStructureResourceRequirements>* TotalResourceRequirements, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetResourceRequirementsForCurrentState_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements);
	void StructureHasAddedResources(class UObject* Structure, bool* HasAddedResources, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetResourcesManagerForCurrentState_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_HasAddedResources_HasAddedResources);
};

}


