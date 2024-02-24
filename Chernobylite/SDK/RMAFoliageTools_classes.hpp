#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RMAFoliageTools.RMAFoliageToolsFunctionLibrary
class URMAFoliageToolsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URMAFoliageToolsFunctionLibrary* GetDefaultObj();

	class FName GetVersion();
	class AInstancedFoliageActor* GetInstancedFoliageActor();
};

}


