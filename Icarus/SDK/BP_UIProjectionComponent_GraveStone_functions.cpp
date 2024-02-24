#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C
// (None)

class UClass* UBP_UIProjectionComponent_GraveStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIProjectionComponent_GraveStone_C");

	return Clss;
}


// BP_UIProjectionComponent_GraveStone_C BP_UIProjectionComponent_GraveStone.Default__BP_UIProjectionComponent_GraveStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIProjectionComponent_GraveStone_C* UBP_UIProjectionComponent_GraveStone_C::GetDefaultObj()
{
	static class UBP_UIProjectionComponent_GraveStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIProjectionComponent_GraveStone_C*>(UBP_UIProjectionComponent_GraveStone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_GraveStone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_GraveStone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.PlayerStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_GraveStone_C::PlayerStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_GraveStone_C", "PlayerStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.ExecuteUbergraph_BP_UIProjectionComponent_GraveStone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Gravestone_C*            K2Node_DynamicCast_AsBP_Gravestone                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIProjectionComponent_GraveStone_C::ExecuteUbergraph_BP_UIProjectionComponent_GraveStone(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABP_Gravestone_C* K2Node_DynamicCast_AsBP_Gravestone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_GraveStone_C", "ExecuteUbergraph_BP_UIProjectionComponent_GraveStone");

	Params::UBP_UIProjectionComponent_GraveStone_C_ExecuteUbergraph_BP_UIProjectionComponent_GraveStone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Gravestone = K2Node_DynamicCast_AsBP_Gravestone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


