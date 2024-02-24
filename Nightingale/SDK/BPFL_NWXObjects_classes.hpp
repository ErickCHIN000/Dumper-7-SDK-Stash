#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_NWXObjects.BPFL_NWXObjects_C
class UBPFL_NWXObjects_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_NWXObjects_C* GetDefaultObj();

	bool OwnerHasAuthority(class UObject* Object, class UObject* __WorldContext, class AActor* Actor, class AActor* CallFunc_FindOwnerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


