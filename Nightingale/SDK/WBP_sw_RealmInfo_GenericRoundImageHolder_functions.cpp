#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C
// (None)

class UClass* UWBP_sw_RealmInfo_GenericRoundImageHolder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_GenericRoundImageHolder_C");

	return Clss;
}


// WBP_sw_RealmInfo_GenericRoundImageHolder_C WBP_sw_RealmInfo_GenericRoundImageHolder.Default__WBP_sw_RealmInfo_GenericRoundImageHolder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_GenericRoundImageHolder_C* UWBP_sw_RealmInfo_GenericRoundImageHolder_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_GenericRoundImageHolder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_GenericRoundImageHolder_C*>(UWBP_sw_RealmInfo_GenericRoundImageHolder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.DisplayNoInfoTextAndContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImageHolder_C::DisplayNoInfoTextAndContainer(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImageHolder_C", "DisplayNoInfoTextAndContainer");

	Params::UWBP_sw_RealmInfo_GenericRoundImageHolder_C_DisplayNoInfoTextAndContainer_Params Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.Add Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_sw_RealmInfo_FactionEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImageHolder_C::Add_Image(TSoftObjectPtr<class UTexture2D> NewParam, class FText Name, class UWBP_sw_RealmInfo_FactionEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImageHolder_C", "Add Image");

	Params::UWBP_sw_RealmInfo_GenericRoundImageHolder_C_Add_Image_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.Name = Name;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImageHolder_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImageHolder_C", "PreConstruct");

	Params::UWBP_sw_RealmInfo_GenericRoundImageHolder_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericRoundImageHolder_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImageHolder_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImageHolder_C::ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImageHolder_C", "ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder");

	Params::UWBP_sw_RealmInfo_GenericRoundImageHolder_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


