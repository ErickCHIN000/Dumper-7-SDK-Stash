#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C
// (None)

class UClass* UUMG_NotificationPopup_ReturnedItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_NotificationPopup_ReturnedItems_C");

	return Clss;
}


// UMG_NotificationPopup_ReturnedItems_C UMG_NotificationPopup_ReturnedItems.Default__UMG_NotificationPopup_ReturnedItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_NotificationPopup_ReturnedItems_C* UUMG_NotificationPopup_ReturnedItems_C::GetDefaultObj()
{
	static class UUMG_NotificationPopup_ReturnedItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_NotificationPopup_ReturnedItems_C*>(UUMG_NotificationPopup_ReturnedItems_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.UpdateAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_ReturnedItems_C::UpdateAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "UpdateAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   Mission                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             ProspectInfo                                                     (Edit, BlueprintVisible)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationPopup_ReturnedItems_C::Update(const struct FFactionMissionsRowHandle& Mission, const struct FIcarusProspect& ProspectInfo, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "Update");

	Params::UUMG_NotificationPopup_ReturnedItems_C_Update_Params Parms{};

	Parms.Mission = Mission;
	Parms.ProspectInfo = ProspectInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationPopup_ReturnedItems_C::BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_NotificationPopup_ReturnedItems_C_BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationPopup_ReturnedItems_C::BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_NotificationPopup_ReturnedItems_C_BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_ReturnedItems_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.PlayShowEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_ReturnedItems_C::PlayShowEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "PlayShowEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup_ReturnedItems.UMG_NotificationPopup_ReturnedItems_C.ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationPopup_ReturnedItems_C::ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_ReturnedItems_C", "ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems");

	Params::UUMG_NotificationPopup_ReturnedItems_C_ExecuteUbergraph_UMG_NotificationPopup_ReturnedItems_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


