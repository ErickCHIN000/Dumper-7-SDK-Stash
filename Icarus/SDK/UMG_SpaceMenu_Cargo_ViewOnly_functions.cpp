#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C
// (None)

class UClass* UUMG_SpaceMenu_Cargo_ViewOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SpaceMenu_Cargo_ViewOnly_C");

	return Clss;
}


// UMG_SpaceMenu_Cargo_ViewOnly_C UMG_SpaceMenu_Cargo_ViewOnly.Default__UMG_SpaceMenu_Cargo_ViewOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SpaceMenu_Cargo_ViewOnly_C* UUMG_SpaceMenu_Cargo_ViewOnly_C::GetDefaultObj()
{
	static class UUMG_SpaceMenu_Cargo_ViewOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SpaceMenu_Cargo_ViewOnly_C*>(UUMG_SpaceMenu_Cargo_ViewOnly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.GetPlayerLoadoutData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutData          LoadoutData                                                      (Parm, OutParm, ContainsInstancedReference)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::GetPlayerLoadoutData(struct FPlayerLoadoutData* LoadoutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "GetPlayerLoadoutData");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_GetPlayerLoadoutData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LoadoutData != nullptr)
		*LoadoutData = std::move(Parms.LoadoutData);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.GetInsuranceEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Insured                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::GetInsuranceEnabled(bool* Insured)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "GetInsuranceEnabled");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_GetInsuranceEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Insured != nullptr)
		*Insured = Parms.Insured;

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMetaItem>           LoadoutInventory                                                 (Edit, BlueprintVisible)
// TArray<struct FMetaItem>           Meta_Inventory                                                   (Edit, BlueprintVisible)
// TArray<struct FDropship>           Dropships                                                        (Edit, BlueprintVisible)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::Initialise(const TArray<struct FMetaItem>& LoadoutInventory, const TArray<struct FMetaItem>& Meta_Inventory, const TArray<struct FDropship>& Dropships)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "Initialise");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_Initialise_Params Parms{};

	Parms.LoadoutInventory = LoadoutInventory;
	Parms.Meta_Inventory = Meta_Inventory;
	Parms.Dropships = Dropships;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "Tick");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.PlayOpenAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_SpaceMenu_Cargo_ViewOnly_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "PlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.SetPendingProspectInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectInfo               ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::SetPendingProspectInfo(const struct FProspectInfo& ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "SetPendingProspectInfo");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_SetPendingProspectInfo_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SpaceMenu_Cargo_ViewOnly_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SpaceMenu_Cargo_ViewOnly.UMG_SpaceMenu_Cargo_ViewOnly_C.ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               K2Node_CustomEvent_ProspectInfo                                  (None)

void UUMG_SpaceMenu_Cargo_ViewOnly_C::ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FProspectInfo& K2Node_CustomEvent_ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenu_Cargo_ViewOnly_C", "ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly");

	Params::UUMG_SpaceMenu_Cargo_ViewOnly_C_ExecuteUbergraph_UMG_SpaceMenu_Cargo_ViewOnly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_ProspectInfo = K2Node_CustomEvent_ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


