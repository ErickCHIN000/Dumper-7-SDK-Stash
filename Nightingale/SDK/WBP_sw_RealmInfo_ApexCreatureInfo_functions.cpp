#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C
// (None)

class UClass* UWBP_sw_RealmInfo_ApexCreatureInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_ApexCreatureInfo_C");

	return Clss;
}


// WBP_sw_RealmInfo_ApexCreatureInfo_C WBP_sw_RealmInfo_ApexCreatureInfo.Default__WBP_sw_RealmInfo_ApexCreatureInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_ApexCreatureInfo_C* UWBP_sw_RealmInfo_ApexCreatureInfo_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_ApexCreatureInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_ApexCreatureInfo_C*>(UWBP_sw_RealmInfo_ApexCreatureInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.DisplayNoInfoText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ApexCreatureInfo_C::DisplayNoInfoText(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ApexCreatureInfo_C", "DisplayNoInfoText");

	Params::UWBP_sw_RealmInfo_ApexCreatureInfo_C_DisplayNoInfoText_Params Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.AddImgAndDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_sw_RealmInfo_GenericRoundImageWithDescription_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ApexCreatureInfo_C::AddImgAndDescription(class FText Name, class FText Description, TSoftObjectPtr<class UTexture2D> Icon, class UWBP_sw_RealmInfo_GenericRoundImageWithDescription_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ApexCreatureInfo_C", "AddImgAndDescription");

	Params::UWBP_sw_RealmInfo_ApexCreatureInfo_C_AddImgAndDescription_Params Parms{};

	Parms.Name = Name;
	Parms.Description = Description;
	Parms.Icon = Icon;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_ApexCreatureInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ApexCreatureInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ApexCreatureInfo_C::ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ApexCreatureInfo_C", "ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo");

	Params::UWBP_sw_RealmInfo_ApexCreatureInfo_C_ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


