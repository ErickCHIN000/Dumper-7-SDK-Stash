#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ScopedAkComponent.BPFL_ScopedAkComponent_C
class UBPFL_ScopedAkComponent_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ScopedAkComponent_C* GetDefaultObj();

	void Spawn_External_Scoped_Ak_Component(const struct FVector& Location, class UObject* __WorldContext, class UScopedAkComponent** Scoped_Ak_Component, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
};

}


