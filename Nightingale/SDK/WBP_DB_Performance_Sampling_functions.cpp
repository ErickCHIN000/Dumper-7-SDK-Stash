#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C
// (None)

class UClass* UWBP_DB_Performance_Sampling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Performance_Sampling_C");

	return Clss;
}


// WBP_DB_Performance_Sampling_C WBP_DB_Performance_Sampling.Default__WBP_DB_Performance_Sampling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Performance_Sampling_C* UWBP_DB_Performance_Sampling_C::GetDefaultObj()
{
	static class UWBP_DB_Performance_Sampling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Performance_Sampling_C*>(UWBP_DB_Performance_Sampling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.UpdateGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::UpdateGrid(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System, bool K2Node_DynamicCast_bSuccess, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "UpdateGrid");

	Params::UWBP_DB_Performance_Sampling_C_UpdateGrid_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System = K2Node_DynamicCast_AsBP_APS_Data_Collection_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.Load BP Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWBP_DB_Performance_Sampling_C::Load_BP_Values(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System, bool K2Node_DynamicCast_bSuccess, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "Load BP Values");

	Params::UWBP_DB_Performance_Sampling_C_Load_BP_Values_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System = K2Node_DynamicCast_AsBP_APS_Data_Collection_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_2 = CallFunc_Conv_DoubleToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_3 = CallFunc_Conv_DoubleToText_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.Load BP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_APS_DataCollectionSystem_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ABP_APS_DataCollectionSystem_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::Load_BP(TArray<class ABP_APS_DataCollectionSystem_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_APS_DataCollectionSystem_C* CallFunc_Array_Get_Item, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class ABP_APS_DataCollectionSystem_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "Load BP");

	Params::UWBP_DB_Performance_Sampling_C_Load_BP_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System = K2Node_DynamicCast_AsBP_APS_Data_Collection_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.Spawn_PerfBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_APS_DataCollectionSystem_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ABP_APS_DataCollectionSystem_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::Spawn_PerfBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ABP_APS_DataCollectionSystem_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class ABP_APS_DataCollectionSystem_C* CallFunc_FinishSpawningActor_ReturnValue, TSoftObjectPtr<class ABP_APS_DataCollectionSystem_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "Spawn_PerfBP");

	Params::UWBP_DB_Performance_Sampling_C_Spawn_PerfBP_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "Tick");

	Params::UWBP_DB_Performance_Sampling_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_PlacePerfBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_PlacePerfBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_PlacePerfBP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_TB_GridDensity_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_TB_GridDensity_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_TB_GridDensity_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_TB_GridDensity_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_StopTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_StopTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_StopTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_RunPerfTest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_RunPerfTest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_RunPerfTest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_GenerateCameraGrid_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_GenerateCameraGrid_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_GenerateCameraGrid_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_TB_SamplingTime_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_TB_SamplingTime_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_TB_SamplingTime_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_TB_SamplingTime_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_TB_SettleDownTime_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_TB_SettleDownTime_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_TB_SettleDownTime_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_TB_SettleDownTime_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_ToggleTODUpdate_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_ToggleTODUpdate_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_ToggleTODUpdate_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_ToggleTODUpdate_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_ToggleTODUpdate_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_ToggleTODUpdate_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_StopTOD_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_StopTOD_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_StopTOD_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetTOD_Midday_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetTOD_Midday_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetTOD_Midday_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetTOD_Dusk_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetTOD_Dusk_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetTOD_Dusk_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetTOD_Night_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetTOD_Night_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetTOD_Night_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_LoadCommands_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_LoadCommands_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_LoadCommands_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_RunCommands_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_RunCommands_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_RunCommands_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_LoadVolumes_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_LoadVolumes_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_LoadVolumes_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_UseVolumesGrid_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_UseVolumesGrid_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_UseVolumesGrid_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_UseVolumesGrid_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_UseWorldGrid_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_UseWorldGrid_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_UseWorldGrid_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_UseWorldGrid_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetSG_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetSG_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetSG_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetSG_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetSG_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetSG_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetSG_2_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetSG_2_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetSG_2_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetSG_3_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetSG_3_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetSG_3_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CheckBox_1_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CheckBox_1_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CheckBox_1_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CheckBox_1_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_TB_ScreenshotSuffix_K2Node_ComponentBoundEvent_24_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_TB_ScreenshotSuffix_K2Node_ComponentBoundEvent_24_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_TB_ScreenshotSuffix_K2Node_ComponentBoundEvent_24_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_TB_ScreenshotSuffix_K2Node_ComponentBoundEvent_24_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetXSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetXSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetXSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetXSX30_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetXSX30_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetXSX30_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_BT_SetXSX60_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_BT_SetXSX60_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_BT_SetXSX60_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_TODDawn_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_TODDawn_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_TODDawn_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_TODDawn_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_TODDusk_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_TODDusk_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_TODDusk_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_TODDusk_K2Node_ComponentBoundEvent_28_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_TODMidday_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_TODMidday_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_TODMidday_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_TODMidday_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.BndEvt__WBP_Performance_CB_TODNight_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::BndEvt__WBP_Performance_CB_TODNight_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "BndEvt__WBP_Performance_CB_TODNight_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_Performance_Sampling_C_BndEvt__WBP_Performance_CB_TODNight_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Performance_Sampling.WBP_DB_Performance_Sampling_C.ExecuteUbergraph_WBP_DB_Performance_Sampling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_DebugMenuScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebugMenuScreen_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_5             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Load_Commands_From_File_Commands                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_6          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_6             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// TArray<class FString>              CallFunc_LoadVolumesFromFile_Volumes                             (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_7          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_7             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_8          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_8             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_9          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_9             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_10         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_10            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_11         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_APS_DataCollectionSystem_C*K2Node_DynamicCast_AsBP_APS_Data_Collection_System_11            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Performance_Sampling_C::ExecuteUbergraph_WBP_DB_Performance_Sampling(int32 EntryPoint, double Temp_real_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System, bool K2Node_DynamicCast_bSuccess, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText K2Node_ComponentBoundEvent_Text_3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class UWBP_DebugMenuScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UWBP_DebugMenuScreen_C* CallFunc_Array_Get_Item, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked_7, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_3, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_4, bool K2Node_DynamicCast_bSuccess_4, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5, class FText CallFunc_GetText_ReturnValue, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_5, bool K2Node_DynamicCast_bSuccess_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Load_Commands_From_File_Commands, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_6, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_6, bool K2Node_DynamicCast_bSuccess_6, class FText CallFunc_GetText_ReturnValue_1, TArray<class FString>& CallFunc_LoadVolumesFromFile_Volumes, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked_6, bool K2Node_ComponentBoundEvent_bIsChecked_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_7, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_7, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_ComponentBoundEvent_bIsChecked_4, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_8, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_ComponentBoundEvent_bIsChecked_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_9, bool K2Node_ComponentBoundEvent_bIsChecked_2, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_9, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_10, int32 CallFunc_Array_AddUnique_ReturnValue_1, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_10, bool K2Node_DynamicCast_bSuccess_10, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool K2Node_ComponentBoundEvent_bIsChecked, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_11, class ABP_APS_DataCollectionSystem_C* K2Node_DynamicCast_AsBP_APS_Data_Collection_System_11, bool K2Node_DynamicCast_bSuccess_11, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Performance_Sampling_C", "ExecuteUbergraph_WBP_DB_Performance_Sampling");

	Params::UWBP_DB_Performance_Sampling_C_ExecuteUbergraph_WBP_DB_Performance_Sampling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System = K2Node_DynamicCast_AsBP_APS_Data_Collection_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Text_3 = K2Node_ComponentBoundEvent_Text_3;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_3 = K2Node_ComponentBoundEvent_CommitMethod_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_2 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_7 = K2Node_ComponentBoundEvent_bIsChecked_7;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_3 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_4 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_5;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_5 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Load_Commands_From_File_Commands = CallFunc_Load_Commands_From_File_Commands;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_6 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_6 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_LoadVolumesFromFile_Volumes = CallFunc_LoadVolumesFromFile_Volumes;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_6 = K2Node_ComponentBoundEvent_bIsChecked_6;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_5 = K2Node_ComponentBoundEvent_bIsChecked_5;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_7 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_7 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_4 = K2Node_ComponentBoundEvent_bIsChecked_4;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_8 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_8;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_8 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_3 = K2Node_ComponentBoundEvent_bIsChecked_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_9 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_9;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_9 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_10 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_10;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_10 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_11 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_APS_Data_Collection_System_11 = K2Node_DynamicCast_AsBP_APS_Data_Collection_System_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_3 = CallFunc_Array_RemoveItem_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


