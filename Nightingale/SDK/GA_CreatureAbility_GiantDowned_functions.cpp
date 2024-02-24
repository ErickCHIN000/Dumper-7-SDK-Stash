#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_GiantDowned.GA_CreatureAbility_GiantDowned_C
// (None)

class UClass* UGA_CreatureAbility_GiantDowned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_GiantDowned_C");

	return Clss;
}


// GA_CreatureAbility_GiantDowned_C GA_CreatureAbility_GiantDowned.Default__GA_CreatureAbility_GiantDowned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_GiantDowned_C* UGA_CreatureAbility_GiantDowned_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_GiantDowned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_GiantDowned_C*>(UGA_CreatureAbility_GiantDowned_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_GiantDowned.GA_CreatureAbility_GiantDowned_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_GiantDowned_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantDowned_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_GiantDowned.GA_CreatureAbility_GiantDowned_C.ExecuteUbergraph_GA_CreatureAbility_GiantDowned
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>CallFunc_UnequipEquippedItem_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantDowned_C::ExecuteUbergraph_GA_CreatureAbility_GiantDowned(int32 EntryPoint, TScriptInterface<class IBPI_EquippedItems_C> CallFunc_UnequipEquippedItem_self_CastInput, bool CallFunc_UnequipEquippedItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantDowned_C", "ExecuteUbergraph_GA_CreatureAbility_GiantDowned");

	Params::UGA_CreatureAbility_GiantDowned_C_ExecuteUbergraph_GA_CreatureAbility_GiantDowned_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UnequipEquippedItem_self_CastInput = CallFunc_UnequipEquippedItem_self_CastInput;
	Parms.CallFunc_UnequipEquippedItem_Success = CallFunc_UnequipEquippedItem_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


