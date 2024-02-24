#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C
// (None)

class UClass* UWid_LevelSelection_Entry_Desc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelSelection_Entry_Desc_C");

	return Clss;
}


// wid_LevelSelection_Entry_Desc_C wid_LevelSelection_Entry_Desc.Default__wid_LevelSelection_Entry_Desc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelSelection_Entry_Desc_C* UWid_LevelSelection_Entry_Desc_C::GetDefaultObj()
{
	static class UWid_LevelSelection_Entry_Desc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelSelection_Entry_Desc_C*>(UWid_LevelSelection_Entry_Desc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ChangeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_LevelSelection_Desc_TypeNewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_Entry_Desc_C::ChangeType(enum class Enum_LevelSelection_Desc_Type NewType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "ChangeType");

	Params::UWid_LevelSelection_Entry_Desc_C_ChangeType_Params Parms{};

	Parms.NewType = NewType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ShowDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_Entry_Desc_C::ShowDesc(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "ShowDesc");

	Params::UWid_LevelSelection_Entry_Desc_C_ShowDesc_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_LevelSelection_Entry_Desc_C::SetTitle(class FText Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "SetTitle");

	Params::UWid_LevelSelection_Entry_Desc_C_SetTitle_Params Parms{};

	Parms.Map = Map;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelSelection_Entry_Desc_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_Entry_Desc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "PreConstruct");

	Params::UWid_LevelSelection_Entry_Desc_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelection_Entry_Desc.wid_LevelSelection_Entry_Desc_C.ExecuteUbergraph_wid_LevelSelection_Entry_Desc
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelection_Entry_Desc_C::ExecuteUbergraph_wid_LevelSelection_Entry_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelection_Entry_Desc_C", "ExecuteUbergraph_wid_LevelSelection_Entry_Desc");

	Params::UWid_LevelSelection_Entry_Desc_C_ExecuteUbergraph_wid_LevelSelection_Entry_Desc_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


