#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventoryItemWithBackgroundImage.UMG_InventoryItemWithBackgroundImage_C
// (None)

class UClass* UUMG_InventoryItemWithBackgroundImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventoryItemWithBackgroundImage_C");

	return Clss;
}


// UMG_InventoryItemWithBackgroundImage_C UMG_InventoryItemWithBackgroundImage.Default__UMG_InventoryItemWithBackgroundImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventoryItemWithBackgroundImage_C* UUMG_InventoryItemWithBackgroundImage_C::GetDefaultObj()
{
	static class UUMG_InventoryItemWithBackgroundImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventoryItemWithBackgroundImage_C*>(UUMG_InventoryItemWithBackgroundImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InventoryItemWithBackgroundImage.UMG_InventoryItemWithBackgroundImage_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  BoundInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InventoryItemWithBackgroundImage_C::Initialise(class UInventory* BoundInventory, int32 Location, class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryItemWithBackgroundImage_C", "Initialise");

	Params::UUMG_InventoryItemWithBackgroundImage_C_Initialise_Params Parms{};

	Parms.BoundInventory = BoundInventory;
	Parms.Location = Location;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}

}


