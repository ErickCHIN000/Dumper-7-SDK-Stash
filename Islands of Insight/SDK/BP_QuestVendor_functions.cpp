#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestVendor.BP_QuestVendor_C
// (Actor)

class UClass* ABP_QuestVendor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestVendor_C");

	return Clss;
}


// BP_QuestVendor_C BP_QuestVendor.Default__BP_QuestVendor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuestVendor_C* ABP_QuestVendor_C::GetDefaultObj()
{
	static class ABP_QuestVendor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuestVendor_C*>(ABP_QuestVendor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestVendor.BP_QuestVendor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_QuestVendor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestVendor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestVendor.BP_QuestVendor_C.ClickVendor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_QuestVendor_C::ClickVendor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestVendor_C", "ClickVendor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestVendor.BP_QuestVendor_C.BP_OnClick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class ASophiaCharacter*            Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  OutHit                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_QuestVendor_C::BP_OnClick(class ASophiaCharacter* Player, struct FHitResult& OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestVendor_C", "BP_OnClick");

	Params::ABP_QuestVendor_C_BP_OnClick_Params Parms{};

	Parms.Player = Player;
	Parms.OutHit = OutHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuestVendor.BP_QuestVendor_C.ExecuteUbergraph_BP_QuestVendor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DailyQuestBackground_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetCompletedActiveQuests_ReturnValue                    (ReferenceParm)
// class UWBP_CompleteQuests_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaCharacter*            K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_OutHit                                              (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_QuestVendor_C::ExecuteUbergraph_BP_QuestVendor(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_DailyQuestBackground_C* CallFunc_Create_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class FName>& CallFunc_GetCompletedActiveQuests_ReturnValue, class UWBP_CompleteQuests_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, class ASophiaCharacter* K2Node_Event_Player, const struct FHitResult& K2Node_Event_OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestVendor_C", "ExecuteUbergraph_BP_QuestVendor");

	Params::ABP_QuestVendor_C_ExecuteUbergraph_BP_QuestVendor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCompletedActiveQuests_ReturnValue = CallFunc_GetCompletedActiveQuests_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_Event_OutHit = K2Node_Event_OutHit;

	UObject::ProcessEvent(Func, &Parms);

}

}


