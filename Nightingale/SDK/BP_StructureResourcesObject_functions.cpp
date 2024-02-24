#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureResourcesObject.BP_StructureResourcesObject_C
// (None)

class UClass* UBP_StructureResourcesObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureResourcesObject_C");

	return Clss;
}


// BP_StructureResourcesObject_C BP_StructureResourcesObject.Default__BP_StructureResourcesObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureResourcesObject_C* UBP_StructureResourcesObject_C::GetDefaultObj()
{
	static class UBP_StructureResourcesObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureResourcesObject_C*>(UBP_StructureResourcesObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureResourcesObject.BP_StructureResourcesObject_C.GetTotalResourceRequirements
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>TotalResourceRequirements                                        (Parm, OutParm, ContainsInstancedReference)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceRequirementsInterface>CallFunc_GetResourceRequirementsForCurrentState_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_TotalResourceRequirements  (ReferenceParm, ContainsInstancedReference)

void UBP_StructureResourcesObject_C::GetTotalResourceRequirements(class UObject* Structure, TArray<struct FStructureResourceRequirements>* TotalResourceRequirements, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetResourceRequirementsForCurrentState_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureResourcesObject_C", "GetTotalResourceRequirements");

	Params::UBP_StructureResourcesObject_C_GetTotalResourceRequirements_Params Parms{};

	Parms.Structure = Structure;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResourceRequirementsForCurrentState_ReturnValue = CallFunc_GetResourceRequirementsForCurrentState_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_TotalResourceRequirements = CallFunc_GetTotalResourceRequirements_TotalResourceRequirements;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalResourceRequirements != nullptr)
		*TotalResourceRequirements = std::move(Parms.TotalResourceRequirements);

}


// Function BP_StructureResourcesObject.BP_StructureResourcesObject_C.StructureHasAddedResources
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasAddedResources                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceConsumerInterface>CallFunc_GetResourcesManagerForCurrentState_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAddedResources_HasAddedResources                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureResourcesObject_C::StructureHasAddedResources(class UObject* Structure, bool* HasAddedResources, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetResourcesManagerForCurrentState_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_HasAddedResources_HasAddedResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureResourcesObject_C", "StructureHasAddedResources");

	Params::UBP_StructureResourcesObject_C_StructureHasAddedResources_Params Parms{};

	Parms.Structure = Structure;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResourcesManagerForCurrentState_ReturnValue = CallFunc_GetResourcesManagerForCurrentState_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_HasAddedResources_HasAddedResources = CallFunc_HasAddedResources_HasAddedResources;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAddedResources != nullptr)
		*HasAddedResources = Parms.HasAddedResources;

}

}


