#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PartySpace.UMG_PartySpace_C
// (None)

class UClass* UUMG_PartySpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PartySpace_C");

	return Clss;
}


// UMG_PartySpace_C UMG_PartySpace.Default__UMG_PartySpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PartySpace_C* UUMG_PartySpace_C::GetDefaultObj()
{
	static class UUMG_PartySpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PartySpace_C*>(UUMG_PartySpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PartySpace.UMG_PartySpace_C.PlayerPartyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumPlayersReady                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllPlayersReady                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartySpace_C::PlayerPartyChanged(int32 NumPlayersReady, bool AllPlayersReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartySpace_C", "PlayerPartyChanged");

	Params::UUMG_PartySpace_C_PlayerPartyChanged_Params Parms{};

	Parms.NumPlayersReady = NumPlayersReady;
	Parms.AllPlayersReady = AllPlayersReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartySpace.UMG_PartySpace_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartySpace_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartySpace_C", "PreConstruct");

	Params::UUMG_PartySpace_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartySpace.UMG_PartySpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_PartySpace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartySpace_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PartySpace.UMG_PartySpace_C.ExecuteUbergraph_UMG_PartySpace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PartyMemberSpace_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartySpace_C::ExecuteUbergraph_UMG_PartySpace(int32 EntryPoint, class UUMG_PartyMemberSpace_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartySpace_C", "ExecuteUbergraph_UMG_PartySpace");

	Params::UUMG_PartySpace_C_ExecuteUbergraph_UMG_PartySpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartySpace.UMG_PartySpace_C.PartyReadyStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllPlayersReady                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartySpace_C::PartyReadyStateChanged__DelegateSignature(bool AllPlayersReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartySpace_C", "PartyReadyStateChanged__DelegateSignature");

	Params::UUMG_PartySpace_C_PartyReadyStateChanged__DelegateSignature_Params Parms{};

	Parms.AllPlayersReady = AllPlayersReady;

	UObject::ProcessEvent(Func, &Parms);

}

}


