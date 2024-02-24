#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BFL_MinimapSystem.BFL_MinimapSystem_C
class UBFL_MinimapSystem_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBFL_MinimapSystem_C* GetDefaultObj();

	class UBPC_MinimapSystem_C* Get_Minimap_Component(class AActor* Actor, class UObject* __WorldContext, class UBPC_MinimapSystem_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


