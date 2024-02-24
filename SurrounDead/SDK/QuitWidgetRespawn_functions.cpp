#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuitWidgetRespawn.QuitWidgetRespawn_C
// (None)

class UClass* UQuitWidgetRespawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuitWidgetRespawn_C");

	return Clss;
}


// QuitWidgetRespawn_C QuitWidgetRespawn.Default__QuitWidgetRespawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuitWidgetRespawn_C* UQuitWidgetRespawn_C::GetDefaultObj()
{
	static class UQuitWidgetRespawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuitWidgetRespawn_C*>(UQuitWidgetRespawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.ClearUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuitWidgetRespawn_C::ClearUI(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "ClearUI");

	Params::UQuitWidgetRespawn_C_ClearUI_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetRespawn_C::BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "BndEvt__YES_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetRespawn_C::BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "BndEvt__NO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetRespawn_C::BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "BndEvt__YES_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UQuitWidgetRespawn_C::BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "BndEvt__NO_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuitWidgetRespawn.QuitWidgetRespawn_C.ExecuteUbergraph_QuitWidgetRespawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URespawnScreen_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UQuitWidgetRespawn_C::ExecuteUbergraph_QuitWidgetRespawn(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class URespawnScreen_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuitWidgetRespawn_C", "ExecuteUbergraph_QuitWidgetRespawn");

	Params::UQuitWidgetRespawn_C_ExecuteUbergraph_QuitWidgetRespawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


