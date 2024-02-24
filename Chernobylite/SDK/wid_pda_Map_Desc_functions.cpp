#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Map_Desc.wid_pda_Map_Desc_C
// (None)

class UClass* UWid_pda_Map_Desc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Map_Desc_C");

	return Clss;
}


// wid_pda_Map_Desc_C wid_pda_Map_Desc.Default__wid_pda_Map_Desc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Map_Desc_C* UWid_pda_Map_Desc_C::GetDefaultObj()
{
	static class UWid_pda_Map_Desc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Map_Desc_C*>(UWid_pda_Map_Desc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.Get_Img_Brush_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWid_pda_Map_Desc_C::Get_Img_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_C", "Get_Img_Brush_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Map_Desc_C::Update(class FText Title, class FText Text, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_C", "Update");

	Params::UWid_pda_Map_Desc_C_Update_Params Parms{};

	Parms.Title = Title;
	Parms.Text = Text;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Desc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_C", "PreConstruct");

	Params::UWid_pda_Map_Desc_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Desc.wid_pda_Map_Desc_C.ExecuteUbergraph_wid_pda_Map_Desc
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Desc_C::ExecuteUbergraph_wid_pda_Map_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_C", "ExecuteUbergraph_wid_pda_Map_Desc");

	Params::UWid_pda_Map_Desc_C_ExecuteUbergraph_wid_pda_Map_Desc_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


