#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DungeonResetPopup.WBP_DungeonResetPopup_C
// (None)

class UClass* UWBP_DungeonResetPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DungeonResetPopup_C");

	return Clss;
}


// WBP_DungeonResetPopup_C WBP_DungeonResetPopup.Default__WBP_DungeonResetPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DungeonResetPopup_C* UWBP_DungeonResetPopup_C::GetDefaultObj()
{
	static class UWBP_DungeonResetPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DungeonResetPopup_C*>(UWBP_DungeonResetPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DungeonResetPopup.WBP_DungeonResetPopup_C.BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DungeonResetPopup_C::BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonResetPopup_C", "BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::UWBP_DungeonResetPopup_C_BndEvt__WBP_dungeonentrypopup_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DungeonResetPopup.WBP_DungeonResetPopup_C.ExecuteUbergraph_WBP_DungeonResetPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Response                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DungeonResetPopup_C::ExecuteUbergraph_WBP_DungeonResetPopup(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_ComponentBoundEvent_Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DungeonResetPopup_C", "ExecuteUbergraph_WBP_DungeonResetPopup");

	Params::UWBP_DungeonResetPopup_C_ExecuteUbergraph_WBP_DungeonResetPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Response = K2Node_ComponentBoundEvent_Response;

	UObject::ProcessEvent(Func, &Parms);

}

}


