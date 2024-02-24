#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C
// (None)

class UClass* UWBP_Inv_StructureResourceRequirements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Inv_StructureResourceRequirements_C");

	return Clss;
}


// WBP_Inv_StructureResourceRequirements_C WBP_Inv_StructureResourceRequirements.Default__WBP_Inv_StructureResourceRequirements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Inv_StructureResourceRequirements_C* UWBP_Inv_StructureResourceRequirements_C::GetDefaultObj()
{
	static class UWBP_Inv_StructureResourceRequirements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Inv_StructureResourceRequirements_C*>(UWBP_Inv_StructureResourceRequirements_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.GenerateResourceEntries
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStructureResourceRequirements>ResourceRequirements                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Structure_TotalRequiredResources_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureResourceRequirements_C::GenerateResourceEntries(TArray<struct FStructureResourceRequirements>& ResourceRequirements, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_TotalRequiredResources_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "GenerateResourceEntries");

	Params::UWBP_Inv_StructureResourceRequirements_C_GenerateResourceEntries_Params Parms{};

	Parms.ResourceRequirements = ResourceRequirements;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.OnSchematicCompleted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureResourceRequirements_C::OnSchematicCompleted(class UObject* Structure, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "OnSchematicCompleted");

	Params::UWBP_Inv_StructureResourceRequirements_C_OnSchematicCompleted_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.OnResourceAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAddResourcesContextAddResourcesContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureResourceRequirements_C::OnResourceAdded(struct FStructureAddResourcesContext& AddResourcesContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "OnResourceAdded");

	Params::UWBP_Inv_StructureResourceRequirements_C_OnResourceAdded_Params Parms{};

	Parms.AddResourcesContext = AddResourcesContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.UpdatePresentation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements(ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         K2Node_DynamicCast_AsStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements_1(ReferenceParm, ContainsInstancedReference)
// TScriptInterface<class IStructureResourceRequirementsInterface>CallFunc_GetConstructionRequirements_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_TotalResourceRequirements  (ReferenceParm, ContainsInstancedReference)

void UWBP_Inv_StructureResourceRequirements_C::UpdatePresentation(TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess_1, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, bool CallFunc_IsValid_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_2, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements_1, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetConstructionRequirements_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "UpdatePresentation");

	Params::UWBP_Inv_StructureResourceRequirements_C_UpdatePresentation_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements = CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Composite = K2Node_DynamicCast_AsStructure_Composite;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1 = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_2 = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements_1 = CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements_1;
	Parms.CallFunc_GetConstructionRequirements_ReturnValue = CallFunc_GetConstructionRequirements_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_TotalResourceRequirements = CallFunc_GetTotalResourceRequirements_TotalResourceRequirements;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureResourceRequirements_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureResourceRequirements_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureResourceRequirements.WBP_Inv_StructureResourceRequirements_C.ExecuteUbergraph_WBP_Inv_StructureResourceRequirements
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue_1                  (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureResourceRequirements_C::ExecuteUbergraph_WBP_Inv_StructureResourceRequirements(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureResourceRequirements_C", "ExecuteUbergraph_WBP_Inv_StructureResourceRequirements");

	Params::UWBP_Inv_StructureResourceRequirements_C_ExecuteUbergraph_WBP_Inv_StructureResourceRequirements_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface_1 = K2Node_DynamicCast_AsStructure_Event_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue_1 = CallFunc_GetStructureEventsObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


