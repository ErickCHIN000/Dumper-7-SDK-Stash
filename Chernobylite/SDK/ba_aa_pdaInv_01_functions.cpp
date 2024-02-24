#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_pdaInv_01.ba_aa_pdaInv_01_C
// (Actor)

class UClass* Aba_aa_pdaInv_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_pdaInv_01_C");

	return Clss;
}


// ba_aa_pdaInv_01_C ba_aa_pdaInv_01.Default__ba_aa_pdaInv_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_pdaInv_01_C* Aba_aa_pdaInv_01_C::GetDefaultObj()
{
	static class Aba_aa_pdaInv_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_pdaInv_01_C*>(Aba_aa_pdaInv_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWid_Pda_C*                  Wid_Pda                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Pda_C*                  K2Node_DynamicCast_AsWid_Pda                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_pdaInv_01_C::GetWidget(class UWid_Pda_C** Wid_Pda, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "GetWidget");

	Params::Aba_aa_pdaInv_01_C_GetWidget_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Pda = K2Node_DynamicCast_AsWid_Pda;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Wid_Pda != nullptr)
		*Wid_Pda = Parms.Wid_Pda;

}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_pdaInv_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "ReceiveTick");

	Params::Aba_aa_pdaInv_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_pdaInv_01_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_pdaInv_01_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_pdaInv_01_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "OnHideShowAdditional");

	Params::Aba_aa_pdaInv_01_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_pdaInv_01.ba_aa_pdaInv_01_C.ExecuteUbergraph_ba_aa_pdaInv_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Pda_C*                  CallFunc_GetWidget_Wid_Pda                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_pda_MainView_C*         K2Node_DynamicCast_AsWid_Pda_Main_View                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery                                    (NoDestructor)
// bool                               CallFunc_QueryActivity_OutQueryResult                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue                             (ReferenceParm)

void Aba_aa_pdaInv_01_C::ExecuteUbergraph_ba_aa_pdaInv_01(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UWid_Pda_C* CallFunc_GetWidget_Wid_Pda, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float K2Node_Event_DeltaSeconds, enum class EState K2Node_Event_OutTargetState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool K2Node_SwitchEnum_CmpSuccess, class UWid_pda_MainView_C* K2Node_DynamicCast_AsWid_Pda_Main_View, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_AddToPlayerScreen_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_pdaInv_01_C", "ExecuteUbergraph_ba_aa_pdaInv_01");

	Params::Aba_aa_pdaInv_01_C_ExecuteUbergraph_ba_aa_pdaInv_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetWidget_Wid_Pda = CallFunc_GetWidget_Wid_Pda;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsWid_Pda_Main_View = K2Node_DynamicCast_AsWid_Pda_Main_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.K2Node_MakeStruct_FPAnimQuery = K2Node_MakeStruct_FPAnimQuery;
	Parms.CallFunc_QueryActivity_OutQueryResult = CallFunc_QueryActivity_OutQueryResult;
	Parms.CallFunc_QueryActivity_OutQueryQueue = CallFunc_QueryActivity_OutQueryQueue;

	UObject::ProcessEvent(Func, &Parms);

}

}


