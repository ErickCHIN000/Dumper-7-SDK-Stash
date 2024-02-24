#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C
// (None)

class UClass* UBP_DevPerks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DevPerks_C");

	return Clss;
}


// BP_DevPerks_C BP_DevPerks.Default__BP_DevPerks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DevPerks_C* UBP_DevPerks_C::GetDefaultObj()
{
	static class UBP_DevPerks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DevPerks_C*>(UBP_DevPerks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DevPerks.BP_DevPerks_C.UnlimitedAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::UnlimitedAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "UnlimitedAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.UnlockAllCustomizations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::UnlockAllCustomizations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "UnlockAllCustomizations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.KillEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::KillEnemies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "KillEnemies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.SpawnAwesomeItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UItemPoolData*>       K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UItemPoolData*>       K2Node_MakeArray_Array1                                          (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UItemPoolData*>       K2Node_MakeArray_Array2                                          (ConstParm, ZeroConstructor, ReferenceParm)

void UBP_DevPerks_C::SpawnAwesomeItems(TArray<class UItemPoolData*>& K2Node_MakeArray_Array, TArray<class UItemPoolData*>& K2Node_MakeArray_Array1, TArray<class UItemPoolData*>& K2Node_MakeArray_Array2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "SpawnAwesomeItems");

	Params::UBP_DevPerks_C_SpawnAwesomeItems_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DevPerks.BP_DevPerks_C.GiveGoldenKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::GiveGoldenKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "GiveGoldenKeys");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.GiveEridium
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::GiveEridium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "GiveEridium");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.GiveCash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::GiveCash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "GiveCash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.GiveLevels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DevPerks_C::GiveLevels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "GiveLevels");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DevPerks.BP_DevPerks_C.OnDeveloperPerkActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// uint8                              Perk                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DevPerks_C::OnDeveloperPerkActivated(uint8 Perk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "OnDeveloperPerkActivated");

	Params::UBP_DevPerks_C_OnDeveloperPerkActivated_Params Parms{};

	Parms.Perk = Perk;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DevPerks.BP_DevPerks_C.ExecuteUbergraph_BP_DevPerks
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_Perk                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DevPerks_C::ExecuteUbergraph_BP_DevPerks(int32 EntryPoint, uint8 K2Node_Event_Perk, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DevPerks_C", "ExecuteUbergraph_BP_DevPerks");

	Params::UBP_DevPerks_C_ExecuteUbergraph_BP_DevPerks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Perk = K2Node_Event_Perk;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


