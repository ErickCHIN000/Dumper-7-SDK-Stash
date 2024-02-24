#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass bi_ItemOnUseAction.bi_ItemOnUseAction_C
class Ibi_ItemOnUseAction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class Ibi_ItemOnUseAction_C* GetDefaultObj();

	void TryUse(class FName ItemId, class ACh_Hero_00_C* Pawn, const struct FVector2D& Index, bool* Success, class USoundBase** SoundToPlay);
};

}


