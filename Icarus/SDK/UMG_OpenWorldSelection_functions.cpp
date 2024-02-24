#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OpenWorldSelection.UMG_OpenWorldSelection_C
// (None)

class UClass* UUMG_OpenWorldSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OpenWorldSelection_C");

	return Clss;
}


// UMG_OpenWorldSelection_C UMG_OpenWorldSelection.Default__UMG_OpenWorldSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OpenWorldSelection_C* UUMG_OpenWorldSelection_C::GetDefaultObj()
{
	static class UUMG_OpenWorldSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OpenWorldSelection_C*>(UUMG_OpenWorldSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_OpenWorldSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_OpenWorldSelection_C_BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.OpenWorldSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectListRowHandle      Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::OpenWorldSelected(const struct FProspectListRowHandle& Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "OpenWorldSelected");

	Params::UUMG_OpenWorldSelection_C_OpenWorldSelected_Params Parms{};

	Parms.Prospect = Prospect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FProspectListRowHandle      Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature");

	Params::UUMG_OpenWorldSelection_C_BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature_Params Parms{};

	Parms.Prospect = Prospect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FProspectListRowHandle      Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature");

	Params::UUMG_OpenWorldSelection_C_BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature_Params Parms{};

	Parms.Prospect = Prospect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.ExecuteUbergraph_UMG_OpenWorldSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_OpenWorldButton_C*      K2Node_DynamicCast_AsUMG_Open_World_Button                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FProspectListRowHandle      K2Node_CustomEvent_Prospect                                      (NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      K2Node_ComponentBoundEvent_Prospect_1                            (NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      K2Node_ComponentBoundEvent_Prospect                              (NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::ExecuteUbergraph_UMG_OpenWorldSelection(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_OpenWorldButton_C* K2Node_DynamicCast_AsUMG_Open_World_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProspectListRowHandle& K2Node_CustomEvent_Prospect, const struct FProspectListRowHandle& K2Node_ComponentBoundEvent_Prospect_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FProspectListRowHandle& K2Node_ComponentBoundEvent_Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "ExecuteUbergraph_UMG_OpenWorldSelection");

	Params::UUMG_OpenWorldSelection_C_ExecuteUbergraph_UMG_OpenWorldSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Open_World_Button = K2Node_DynamicCast_AsUMG_Open_World_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Prospect = K2Node_CustomEvent_Prospect;
	Parms.K2Node_ComponentBoundEvent_Prospect_1 = K2Node_ComponentBoundEvent_Prospect_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Prospect = K2Node_ComponentBoundEvent_Prospect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.BackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_OpenWorldSelection_C::BackButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "BackButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_OpenWorldSelection.UMG_OpenWorldSelection_C.OpenWorldProspectSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectListRowHandle      Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_OpenWorldSelection_C::OpenWorldProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OpenWorldSelection_C", "OpenWorldProspectSelected__DelegateSignature");

	Params::UUMG_OpenWorldSelection_C_OpenWorldProspectSelected__DelegateSignature_Params Parms{};

	Parms.Prospect = Prospect;

	UObject::ProcessEvent(Func, &Parms);

}

}


