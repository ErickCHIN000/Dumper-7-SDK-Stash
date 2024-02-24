#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericGatheringPlant.GenericGatheringPlant_C
// (Actor)

class UClass* AGenericGatheringPlant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericGatheringPlant_C");

	return Clss;
}


// GenericGatheringPlant_C GenericGatheringPlant.Default__GenericGatheringPlant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericGatheringPlant_C* AGenericGatheringPlant_C::GetDefaultObj()
{
	static class AGenericGatheringPlant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericGatheringPlant_C*>(AGenericGatheringPlant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericGatheringPlant.GenericGatheringPlant_C.GetSelectionInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FS_Selection                K2Node_MakeStruct_S_Selection                                    (HasGetValueTypeHash)

void AGenericGatheringPlant_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericGatheringPlant_C", "GetSelectionInfo");

	Params::AGenericGatheringPlant_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_S_Selection = K2Node_MakeStruct_S_Selection;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function GenericGatheringPlant.GenericGatheringPlant_C.GetPickupItemCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          PickupCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPickupItemCount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RollSecondPlantDrop_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

int32 AGenericGatheringPlant_C::GetPickupItemCount(class ASHInventory* Inventory, class ASHPlayerCharacter* PickupCharacter, int32 CallFunc_GetPickupItemCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RollSecondPlantDrop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericGatheringPlant_C", "GetPickupItemCount");

	Params::AGenericGatheringPlant_C_GetPickupItemCount_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.PickupCharacter = PickupCharacter;
	Parms.CallFunc_GetPickupItemCount_ReturnValue = CallFunc_GetPickupItemCount_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RollSecondPlantDrop_ReturnValue = CallFunc_RollSecondPlantDrop_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


