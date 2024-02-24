#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C
// (Actor)

class UClass* Aba_ia_BaseInteractableObject_01_nosave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ia_BaseInteractableObject_01_nosave_C");

	return Clss;
}


// ba_ia_BaseInteractableObject_01_nosave_C ba_ia_BaseInteractableObject_01_nosave.Default__ba_ia_BaseInteractableObject_01_nosave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ia_BaseInteractableObject_01_nosave_C* Aba_ia_BaseInteractableObject_01_nosave_C::GetDefaultObj()
{
	static class Aba_ia_BaseInteractableObject_01_nosave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ia_BaseInteractableObject_01_nosave_C*>(Aba_ia_BaseInteractableObject_01_nosave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetItemFromDistributor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::GetItemFromDistributor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetItemFromDistributor");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetItemFromDistributor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetComponentTagToSkipWhenOverlappingSphere
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName Aba_ia_BaseInteractableObject_01_nosave_C::GetComponentTagToSkipWhenOverlappingSphere()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetComponentTagToSkipWhenOverlappingSphere");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetComponentTagToSkipWhenOverlappingSphere_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetSkipChildComponentWhenOverlapping
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::GetSkipChildComponentWhenOverlapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetSkipChildComponentWhenOverlapping");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetSkipChildComponentWhenOverlapping_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetOverrideMaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_ia_BaseInteractableObject_01_nosave_C::GetOverrideMaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetOverrideMaxInteractionDistance");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetOverrideMaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetShouldOverrideMaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::GetShouldOverrideMaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetShouldOverrideMaxInteractionDistance");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetShouldOverrideMaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetActorInteractionAngle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D Aba_ia_BaseInteractableObject_01_nosave_C::GetActorInteractionAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetActorInteractionAngle");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetActorInteractionAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetFarInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_ia_BaseInteractableObject_01_nosave_C::GetFarInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetFarInteractionDistance");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetFarInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.GetNearInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_ia_BaseInteractableObject_01_nosave_C::GetNearInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "GetNearInteractionDistance");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_GetNearInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.SupportsOnlyFocusEvents
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::SupportsOnlyFocusEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "SupportsOnlyFocusEvents");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_SupportsOnlyFocusEvents_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.IsInteractionUnlocked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::IsInteractionUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "IsInteractionUnlocked");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_IsInteractionUnlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.IsObjectVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_ia_BaseInteractableObject_01_nosave_C::IsObjectVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "IsObjectVisible");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_IsObjectVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.MaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_ia_BaseInteractableObject_01_nosave_C::MaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "MaxInteractionDistance");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_MaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.Get Interaction Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_col_ViewableObjectInteractivePoint_01_C*Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::Get_Interaction_Widget(class UWid_col_ViewableObjectInteractivePoint_01_C** Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "Get Interaction Widget");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_Get_Interaction_Widget_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalAbortInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalAbortInteraction(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalAbortInteraction");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalAbortInteraction_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalShowNearInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalShowNearInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalShowNearInteractIcon");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalShowNearInteractIcon_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalDefaultPressedComponentImplementation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalDefaultPressedComponentImplementation(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalDefaultPressedComponentImplementation");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalDefaultPressedComponentImplementation_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalHideInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalHideInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalHideInteractIcon");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalHideInteractIcon_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalShowInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalShowInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalShowInteractIcon");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalShowInteractIcon_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalOnObjectVisibleStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalOnObjectVisibleStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalOnObjectVisibleStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalSetInteractIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_Interactable_Label      CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_Interactable_Label      CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_TextText_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalSetInteractIcon(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_1, const struct FSt_Interactable_Label& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSt_Interactable_Label& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalSetInteractIcon");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalSetInteractIcon_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_NotEqual_TextText_ReturnValue = CallFunc_NotEqual_TextText_ReturnValue;
	Parms.CallFunc_NotEqual_TextText_ReturnValue_1 = CallFunc_NotEqual_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalFinishInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalFinishInteraction(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalFinishInteraction");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_InternalFinishInteraction_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.InternalOnInteractionLockedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::InternalOnInteractionLockedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "InternalOnInteractionLockedStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::UserConstructionScript(bool CallFunc_IsInEditor_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "UserConstructionScript");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsInEditor_ReturnValue = CallFunc_IsInEditor_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue_1 = CallFunc_RotateAngleAxis_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue_1 = CallFunc_Multiply_VectorInt_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.SetItemAndAmount
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 SM                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseAmountValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::SetItemAndAmount(enum class EResourceType Type, float Amount, class UStaticMesh* SM, float BaseAmountValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "SetItemAndAmount");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_SetItemAndAmount_Params Parms{};

	Parms.Type = Type;
	Parms.Amount = Amount;
	Parms.SM = SM;
	Parms.BaseAmountValue = BaseAmountValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.SetItemFromDistributor
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::SetItemFromDistributor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "SetItemFromDistributor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnInteractionReleasedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentPlayerWasInteractingWith                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnInteractionReleasedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentPlayerWasInteractingWith)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnInteractionReleasedComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnInteractionReleasedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentPlayerWasInteractingWith = ComponentPlayerWasInteractingWith;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.LockInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::LockInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "LockInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.UnlockInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::UnlockInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "UnlockInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.SetInteractionLocked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLocked                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::SetInteractionLocked(bool bLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "SetInteractionLocked");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_SetInteractionLocked_Params Parms{};

	Parms.bLocked = bLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnInteractionPressedComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnPlayerFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnPlayerFocusGainedComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnPlayerFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnPlayerFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnPlayerFocusLostComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnPlayerFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.SetObjectVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_BaseInteractableObject_01_nosave_C::SetObjectVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "SetObjectVisible");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_SetObjectVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnPlayerNearFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnPlayerNearFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnPlayerNearFocusGainedComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnPlayerNearFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnPlayerNearFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnPlayerNearFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnPlayerNearFocusLostComponent");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnPlayerNearFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.ExecuteUbergraph_ba_ia_BaseInteractableObject_01_nosave
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bLocked                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentPlayerWasInteractingWith                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_4                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EResourceType           K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Event_SM                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_BaseAmountValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::ExecuteUbergraph_ba_ia_BaseInteractableObject_01_nosave(int32 EntryPoint, bool K2Node_Event_bLocked, class AMainPawnCpp* K2Node_Event_PlayerPawn_5, class UActorComponent* K2Node_Event_ComponentPlayerWasInteractingWith, class AMainPawnCpp* K2Node_Event_PlayerPawn_4, class UActorComponent* K2Node_Event_ComponentHit_4, class AMainPawnCpp* K2Node_Event_PlayerPawn_3, class UActorComponent* K2Node_Event_ComponentHit_3, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, bool K2Node_Event_bVisible, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EResourceType K2Node_Event_Type, float K2Node_Event_Amount, class UStaticMesh* K2Node_Event_SM, float K2Node_Event_BaseAmountValue, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "ExecuteUbergraph_ba_ia_BaseInteractableObject_01_nosave");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_ExecuteUbergraph_ba_ia_BaseInteractableObject_01_nosave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bLocked = K2Node_Event_bLocked;
	Parms.K2Node_Event_PlayerPawn_5 = K2Node_Event_PlayerPawn_5;
	Parms.K2Node_Event_ComponentPlayerWasInteractingWith = K2Node_Event_ComponentPlayerWasInteractingWith;
	Parms.K2Node_Event_PlayerPawn_4 = K2Node_Event_PlayerPawn_4;
	Parms.K2Node_Event_ComponentHit_4 = K2Node_Event_ComponentHit_4;
	Parms.K2Node_Event_PlayerPawn_3 = K2Node_Event_PlayerPawn_3;
	Parms.K2Node_Event_ComponentHit_3 = K2Node_Event_ComponentHit_3;
	Parms.K2Node_Event_PlayerPawn_2 = K2Node_Event_PlayerPawn_2;
	Parms.K2Node_Event_ComponentHit_2 = K2Node_Event_ComponentHit_2;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_SM = K2Node_Event_SM;
	Parms.K2Node_Event_BaseAmountValue = K2Node_Event_BaseAmountValue;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_ComponentHit_1 = K2Node_Event_ComponentHit_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnInteractionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_BaseInteractableObject_01_nosave_C::OnInteractionFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnInteractionFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C.OnInteractionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_ia_BaseInteractableObject_01_C*Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_BaseInteractableObject_01_nosave_C::OnInteractionStarted__DelegateSignature(class Aba_ia_BaseInteractableObject_01_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_BaseInteractableObject_01_nosave_C", "OnInteractionStarted__DelegateSignature");

	Params::Aba_ia_BaseInteractableObject_01_nosave_C_OnInteractionStarted__DelegateSignature_Params Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);

}

}


