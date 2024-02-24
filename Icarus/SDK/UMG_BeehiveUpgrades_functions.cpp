#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C
// (None)

class UClass* UUMG_BeehiveUpgrades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BeehiveUpgrades_C");

	return Clss;
}


// UMG_BeehiveUpgrades_C UMG_BeehiveUpgrades.Default__UMG_BeehiveUpgrades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BeehiveUpgrades_C* UUMG_BeehiveUpgrades_C::GetDefaultObj()
{
	static class UUMG_BeehiveUpgrades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BeehiveUpgrades_C*>(UUMG_BeehiveUpgrades_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BeehiveUpgrades_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgrades_C", "Tick");

	Params::UUMG_BeehiveUpgrades_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BeehiveUpgrades_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgrades_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BeehiveUpgrades_C::Initialize(class AActor* LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgrades_C", "Initialize");

	Params::UUMG_BeehiveUpgrades_C_Initialize_Params Parms{};

	Parms.LinkedActor = LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BeehiveUpgrades.UMG_BeehiveUpgrades_C.ExecuteUbergraph_UMG_BeehiveUpgrades
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LinkedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BeehiveUpgrades_C::ExecuteUbergraph_UMG_BeehiveUpgrades(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AActor* K2Node_CustomEvent_LinkedActor, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgrades_C", "ExecuteUbergraph_UMG_BeehiveUpgrades");

	Params::UUMG_BeehiveUpgrades_C_ExecuteUbergraph_UMG_BeehiveUpgrades_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_LinkedActor = K2Node_CustomEvent_LinkedActor;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


