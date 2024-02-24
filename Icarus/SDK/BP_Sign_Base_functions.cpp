#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
// (Actor)

class UClass* ABP_Sign_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Sign_Base_C");

	return Clss;
}


// BP_Sign_Base_C BP_Sign_Base.Default__BP_Sign_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Sign_Base_C* ABP_Sign_Base_C::GetDefaultObj()
{
	static class ABP_Sign_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Sign_Base_C*>(ABP_Sign_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Sign_Base.BP_Sign_Base_C.GetSignIconRow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FItemableRowHandle          ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FItemableRowHandle ABP_Sign_Base_C::GetSignIconRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "GetSignIconRow");

	Params::ABP_Sign_Base_C_GetSignIconRow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Sign_Base.BP_Sign_Base_C.GetSignColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ABP_Sign_Base_C::GetSignColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "GetSignColor");

	Params::ABP_Sign_Base_C_GetSignColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Sign_Base.BP_Sign_Base_C.GetSignText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm)

class FText ABP_Sign_Base_C::GetSignText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "GetSignText");

	Params::ABP_Sign_Base_C_GetSignText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_IconRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Sign_Text_Display_C*    K2Node_DynamicCast_AsUMG_Sign_Text_Display                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Sign_Base_C::OnRep_IconRow(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "OnRep_IconRow");

	Params::ABP_Sign_Base_C_OnRep_IconRow_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Sign_Text_Display = K2Node_DynamicCast_AsUMG_Sign_Text_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_FontColor
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Sign_Text_Display_C*    K2Node_DynamicCast_AsUMG_Sign_Text_Display                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Sign_Base_C::OnRep_FontColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "OnRep_FontColor");

	Params::ABP_Sign_Base_C_OnRep_FontColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Sign_Text_Display = K2Node_DynamicCast_AsUMG_Sign_Text_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Sign_Base_C::Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "Deployable_Interact");

	Params::ABP_Sign_Base_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.OnRep_Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Sign_Text_Display_C*    K2Node_DynamicCast_AsUMG_Sign_Text_Display                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Sign_Base_C::OnRep_Text(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "OnRep_Text");

	Params::ABP_Sign_Base_C_OnRep_Text_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Sign_Text_Display = K2Node_DynamicCast_AsUMG_Sign_Text_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.SetSignText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                Color                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sign_Base_C::SetSignText(class FText& Text, struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "SetSignText");

	Params::ABP_Sign_Base_C_SetSignText_Params Parms{};

	Parms.Text = Text;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.UpdateTextRender
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Sign_Base_C::UpdateTextRender(class FText& Text, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "UpdateTextRender");

	Params::ABP_Sign_Base_C_UpdateTextRender_Params Parms{};

	Parms.Text = Text;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.SetSignIcon
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemableRowHandle          IconRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Sign_Base_C::SetSignIcon(struct FItemableRowHandle& IconRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "SetSignIcon");

	Params::ABP_Sign_Base_C_SetSignIcon_Params Parms{};

	Parms.IconRow = IconRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.UpdateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemableRowHandle          IconRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Sign_Base_C::UpdateIcon(const struct FItemableRowHandle& IconRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "UpdateIcon");

	Params::ABP_Sign_Base_C_UpdateIcon_Params Parms{};

	Parms.IconRow = IconRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Sign_Base.BP_Sign_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Sign_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Sign_Base.BP_Sign_Base_C.ExecuteUbergraph_BP_Sign_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// struct FLinearColor                K2Node_Event_Color                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          K2Node_Event_IconRow                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          K2Node_CustomEvent_IconRow                                       (NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Sign_Text_Display_C*    K2Node_DynamicCast_AsUMG_Sign_Text_Display                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void ABP_Sign_Base_C::ExecuteUbergraph_BP_Sign_Base(int32 EntryPoint, class FText K2Node_Event_Text, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_CustomEvent_Text, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FItemableRowHandle& K2Node_Event_IconRow, const struct FItemableRowHandle& K2Node_CustomEvent_IconRow, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Sign_Text_Display_C* K2Node_DynamicCast_AsUMG_Sign_Text_Display, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Sign_Base_C", "ExecuteUbergraph_BP_Sign_Base");

	Params::ABP_Sign_Base_C_ExecuteUbergraph_BP_Sign_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_Event_IconRow = K2Node_Event_IconRow;
	Parms.K2Node_CustomEvent_IconRow = K2Node_CustomEvent_IconRow;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Sign_Text_Display = K2Node_DynamicCast_AsUMG_Sign_Text_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


