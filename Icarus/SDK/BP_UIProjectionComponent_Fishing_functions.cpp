#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C
// (None)

class UClass* UBP_UIProjectionComponent_Fishing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIProjectionComponent_Fishing_C");

	return Clss;
}


// BP_UIProjectionComponent_Fishing_C BP_UIProjectionComponent_Fishing.Default__BP_UIProjectionComponent_Fishing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIProjectionComponent_Fishing_C* UBP_UIProjectionComponent_Fishing_C::GetDefaultObj()
{
	static class UBP_UIProjectionComponent_Fishing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIProjectionComponent_Fishing_C*>(UBP_UIProjectionComponent_Fishing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.GetFishingRod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_SkeletalItem_Fishing_Rod_C*FishingRod                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fishing_Rod_Lure_C*      K2Node_DynamicCast_AsBP_Fishing_Rod_Lure                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SkeletalItem_Fishing_Rod_C*CallFunc_GetFishingRod_FishingRod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_Fishing_C::GetFishingRod(class ABP_SkeletalItem_Fishing_Rod_C** FishingRod, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "GetFishingRod");

	Params::UBP_UIProjectionComponent_Fishing_C_GetFishingRod_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fishing_Rod_Lure = K2Node_DynamicCast_AsBP_Fishing_Rod_Lure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFishingRod_FishingRod = CallFunc_GetFishingRod_FishingRod;

	UObject::ProcessEvent(Func, &Parms);

	if (FishingRod != nullptr)
		*FishingRod = Parms.FishingRod;

}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.GetWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fishing_Rod_Lure_C*      K2Node_DynamicCast_AsBP_Fishing_Rod_Lure                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_Fishing_C::GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "GetWidgetLocation");

	Params::UBP_UIProjectionComponent_Fishing_C_GetWidgetLocation_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fishing_Rod_Lure = K2Node_DynamicCast_AsBP_Fishing_Rod_Lure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_Fishing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIProjectionComponent_Fishing_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "ReceiveTick");

	Params::UBP_UIProjectionComponent_Fishing_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.ForceProjectionUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UIProjectionComponent_Fishing_C::ForceProjectionUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "ForceProjectionUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C.ExecuteUbergraph_BP_UIProjectionComponent_Fishing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fishing_Rod_Lure_C*      K2Node_DynamicCast_AsBP_Fishing_Rod_Lure                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetOwningPlayer_AsIcarus_Player_Character               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_Fishing_Rod_C*CallFunc_GetFishingRod_FishingRod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCasted_Casted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIProjectionComponent_Fishing_C::ExecuteUbergraph_BP_UIProjectionComponent_Fishing(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Fishing_Rod_Lure_C* K2Node_DynamicCast_AsBP_Fishing_Rod_Lure, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* CallFunc_GetOwningPlayer_AsIcarus_Player_Character, class ABP_SkeletalItem_Fishing_Rod_C* CallFunc_GetFishingRod_FishingRod, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCasted_Casted, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UIProjectionComponent_Fishing_C", "ExecuteUbergraph_BP_UIProjectionComponent_Fishing");

	Params::UBP_UIProjectionComponent_Fishing_C_ExecuteUbergraph_BP_UIProjectionComponent_Fishing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fishing_Rod_Lure = K2Node_DynamicCast_AsBP_Fishing_Rod_Lure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_AsIcarus_Player_Character = CallFunc_GetOwningPlayer_AsIcarus_Player_Character;
	Parms.CallFunc_GetFishingRod_FishingRod = CallFunc_GetFishingRod_FishingRod;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsCasted_Casted = CallFunc_IsCasted_Casted;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


