#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ItemTypes.CharacteristicDataAsset
// (None)

class UClass* UCharacteristicDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacteristicDataAsset");

	return Clss;
}


// CharacteristicDataAsset ItemTypes.Default__CharacteristicDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacteristicDataAsset* UCharacteristicDataAsset::GetDefaultObj()
{
	static class UCharacteristicDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacteristicDataAsset*>(UCharacteristicDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.Item
// (Actor)

class UClass* AItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item");

	return Clss;
}


// Item ItemTypes.Default__Item
// (Public, ClassDefaultObject, ArchetypeObject)

class AItem* AItem::GetDefaultObj()
{
	static class AItem* Default = nullptr;

	if (!Default)
		Default = static_cast<AItem*>(AItem::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemAttributeModifierAsset
// (None)

class UClass* UItemAttributeModifierAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemAttributeModifierAsset");

	return Clss;
}


// ItemAttributeModifierAsset ItemTypes.Default__ItemAttributeModifierAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemAttributeModifierAsset* UItemAttributeModifierAsset::GetDefaultObj()
{
	static class UItemAttributeModifierAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemAttributeModifierAsset*>(UItemAttributeModifierAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemSubtypeObject
// (None)

class UClass* UItemSubtypeObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemSubtypeObject");

	return Clss;
}


// ItemSubtypeObject ItemTypes.Default__ItemSubtypeObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemSubtypeObject* UItemSubtypeObject::GetDefaultObj()
{
	static class UItemSubtypeObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemSubtypeObject*>(UItemSubtypeObject::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemDataAsset
// (None)

class UClass* UItemDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDataAsset");

	return Clss;
}


// ItemDataAsset ItemTypes.Default__ItemDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemDataAsset* UItemDataAsset::GetDefaultObj()
{
	static class UItemDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDataAsset*>(UItemDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ObjectWrapper_ItemDataReference
// (None)

class UClass* UObjectWrapper_ItemDataReference::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectWrapper_ItemDataReference");

	return Clss;
}


// ObjectWrapper_ItemDataReference ItemTypes.Default__ObjectWrapper_ItemDataReference
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectWrapper_ItemDataReference* UObjectWrapper_ItemDataReference::GetDefaultObj()
{
	static class UObjectWrapper_ItemDataReference* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectWrapper_ItemDataReference*>(UObjectWrapper_ItemDataReference::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemPerkArchetypeDataAsset
// (None)

class UClass* UItemPerkArchetypeDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPerkArchetypeDataAsset");

	return Clss;
}


// ItemPerkArchetypeDataAsset ItemTypes.Default__ItemPerkArchetypeDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPerkArchetypeDataAsset* UItemPerkArchetypeDataAsset::GetDefaultObj()
{
	static class UItemPerkArchetypeDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPerkArchetypeDataAsset*>(UItemPerkArchetypeDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemPerkDataAsset
// (None)

class UClass* UItemPerkDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPerkDataAsset");

	return Clss;
}


// ItemPerkDataAsset ItemTypes.Default__ItemPerkDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPerkDataAsset* UItemPerkDataAsset::GetDefaultObj()
{
	static class UItemPerkDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPerkDataAsset*>(UItemPerkDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemPresentationDataAsset
// (None)

class UClass* UItemPresentationDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPresentationDataAsset");

	return Clss;
}


// ItemPresentationDataAsset ItemTypes.Default__ItemPresentationDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPresentationDataAsset* UItemPresentationDataAsset::GetDefaultObj()
{
	static class UItemPresentationDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPresentationDataAsset*>(UItemPresentationDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ItemTypeReferenceInterface
// (None)

class UClass* IItemTypeReferenceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemTypeReferenceInterface");

	return Clss;
}


// ItemTypeReferenceInterface ItemTypes.Default__ItemTypeReferenceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IItemTypeReferenceInterface* IItemTypeReferenceInterface::GetDefaultObj()
{
	static class IItemTypeReferenceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IItemTypeReferenceInterface*>(IItemTypeReferenceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ResourceCustomizationDataAsset
// (None)

class UClass* UResourceCustomizationDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceCustomizationDataAsset");

	return Clss;
}


// ResourceCustomizationDataAsset ItemTypes.Default__ResourceCustomizationDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UResourceCustomizationDataAsset* UResourceCustomizationDataAsset::GetDefaultObj()
{
	static class UResourceCustomizationDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceCustomizationDataAsset*>(UResourceCustomizationDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemTypes.ResourceCustomizationDataFunctionLibrary
// (None)

class UClass* UResourceCustomizationDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceCustomizationDataFunctionLibrary");

	return Clss;
}


// ResourceCustomizationDataFunctionLibrary ItemTypes.Default__ResourceCustomizationDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UResourceCustomizationDataFunctionLibrary* UResourceCustomizationDataFunctionLibrary::GetDefaultObj()
{
	static class UResourceCustomizationDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceCustomizationDataFunctionLibrary*>(UResourceCustomizationDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.TryGetResourceCustomizationData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FResourceCustomizationDataReferenceReference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FResourceCustomizationData  OutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGetResult              OutBranches                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResourceCustomizationDataFunctionLibrary::TryGetResourceCustomizationData(struct FResourceCustomizationDataReference& Reference, struct FResourceCustomizationData* OutData, enum class EGetResult* OutBranches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceCustomizationDataFunctionLibrary", "TryGetResourceCustomizationData");

	Params::UResourceCustomizationDataFunctionLibrary_TryGetResourceCustomizationData_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	if (OutBranches != nullptr)
		*OutBranches = Parms.OutBranches;

}


// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.NotEqual_FItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FResourceCustomizationDataReferenceA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FResourceCustomizationDataReferenceB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UResourceCustomizationDataFunctionLibrary::NotEqual_FItemDataReference(struct FResourceCustomizationDataReference& A, struct FResourceCustomizationDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceCustomizationDataFunctionLibrary", "NotEqual_FItemDataReference");

	Params::UResourceCustomizationDataFunctionLibrary_NotEqual_FItemDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FResourceCustomizationDataReferenceReference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UResourceCustomizationDataFunctionLibrary::IsValid(struct FResourceCustomizationDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceCustomizationDataFunctionLibrary", "IsValid");

	Params::UResourceCustomizationDataFunctionLibrary_IsValid_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemTypes.ResourceCustomizationDataFunctionLibrary.EqualEqual_FItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FResourceCustomizationDataReferenceA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FResourceCustomizationDataReferenceB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UResourceCustomizationDataFunctionLibrary::EqualEqual_FItemDataReference(struct FResourceCustomizationDataReference& A, struct FResourceCustomizationDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceCustomizationDataFunctionLibrary", "EqualEqual_FItemDataReference");

	Params::UResourceCustomizationDataFunctionLibrary_EqualEqual_FItemDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ItemTypes.ResourceCustomizationType
// (None)

class UClass* UResourceCustomizationType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceCustomizationType");

	return Clss;
}


// ResourceCustomizationType ItemTypes.Default__ResourceCustomizationType
// (Public, ClassDefaultObject, ArchetypeObject)

class UResourceCustomizationType* UResourceCustomizationType::GetDefaultObj()
{
	static class UResourceCustomizationType* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceCustomizationType*>(UResourceCustomizationType::StaticClass()->DefaultObject);

	return Default;
}

}


