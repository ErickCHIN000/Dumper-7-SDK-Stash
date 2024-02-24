#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C
// (None)

class UClass* UWBP_HUD_Structure_TotalRequiredResources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Structure_TotalRequiredResources_C");

	return Clss;
}


// WBP_HUD_Structure_TotalRequiredResources_C WBP_HUD_Structure_TotalRequiredResources.Default__WBP_HUD_Structure_TotalRequiredResources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Structure_TotalRequiredResources_C* UWBP_HUD_Structure_TotalRequiredResources_C::GetDefaultObj()
{
	static class UWBP_HUD_Structure_TotalRequiredResources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Structure_TotalRequiredResources_C*>(UWBP_HUD_Structure_TotalRequiredResources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Structure_TotalRequiredResources_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::InitializeDesignerPreview(int32 Temp_int_Variable, class UWBP_HUD_Structure_TotalRequiredResources_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "InitializeDesignerPreview");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_InitializeDesignerPreview_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.OnResourcesRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureRemoveResourcesContextRemovedResourcesContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HUD_Structure_TotalRequiredResources_C::OnResourcesRemoved(struct FStructureRemoveResourcesContext& RemovedResourcesContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "OnResourcesRemoved");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_OnResourcesRemoved_Params Parms{};

	Parms.RemovedResourcesContext = RemovedResourcesContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.OnResourcesAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAddResourcesContextAddResourcesContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HUD_Structure_TotalRequiredResources_C::OnResourcesAdded(struct FStructureAddResourcesContext& AddResourcesContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "OnResourcesAdded");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_OnResourcesAdded_Params Parms{};

	Parms.AddResourcesContext = AddResourcesContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "RemoveBindings");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "SetupBindings");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.GetStructurePiece
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     InStructure                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OutStructure                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    K2Node_DynamicCast_AsStructure_Composite_Piece                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetOwnerStructureComposite_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::GetStructurePiece(class UObject* InStructure, class UObject** OutStructure, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "GetStructurePiece");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_GetStructurePiece_Params Parms{};

	Parms.InStructure = InStructure;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece = K2Node_DynamicCast_AsStructure_Composite_Piece;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwnerStructureComposite_ReturnValue = CallFunc_GetOwnerStructureComposite_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStructure != nullptr)
		*OutStructure = Parms.OutStructure;

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.TryAddResourcesEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureResourceRequirementsResourceRequirements                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Structure_TotalRequiredResources_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFuel_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::TryAddResourcesEntry(struct FStructureResourceRequirements& ResourceRequirements, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_TotalRequiredResources_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsFuel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "TryAddResourcesEntry");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_TryAddResourcesEntry_Params Parms{};

	Parms.ResourceRequirements = ResourceRequirements;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsFuel_ReturnValue = CallFunc_IsFuel_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.IsFuel
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FStructureResourceRequirementsRequirements                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConstraintHasTag_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_HUD_Structure_TotalRequiredResources_C::IsFuel(struct FStructureResourceRequirements& Requirements, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_ConstraintHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "IsFuel");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_IsFuel_Params Parms{};

	Parms.Requirements = Requirements;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_ConstraintHasTag_ReturnValue = CallFunc_ConstraintHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStructureResourceRequirements>LResourceRequirements                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements(ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureResourceRequirementsCallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::Refresh(const TArray<struct FStructureResourceRequirements>& LResourceRequirements, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, bool CallFunc_HasAnyChildren_ReturnValue, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "Refresh");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_Refresh_Params Parms{};

	Parms.LResourceRequirements = LResourceRequirements;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements = CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.UpdateStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NewStructure                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetStructurePiece_OutStructure                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::UpdateStructure(class UObject* NewStructure, class UObject* CallFunc_GetStructurePiece_OutStructure, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "UpdateStructure");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_UpdateStructure_Params Parms{};

	Parms.NewStructure = NewStructure;
	Parms.CallFunc_GetStructurePiece_OutStructure = CallFunc_GetStructurePiece_OutStructure;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Structure_TotalRequiredResources_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Structure_TotalRequiredResources.WBP_HUD_Structure_TotalRequiredResources_C.ExecuteUbergraph_WBP_HUD_Structure_TotalRequiredResources
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_TotalRequiredResources_C::ExecuteUbergraph_WBP_HUD_Structure_TotalRequiredResources(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_TotalRequiredResources_C", "ExecuteUbergraph_WBP_HUD_Structure_TotalRequiredResources");

	Params::UWBP_HUD_Structure_TotalRequiredResources_C_ExecuteUbergraph_WBP_HUD_Structure_TotalRequiredResources_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


