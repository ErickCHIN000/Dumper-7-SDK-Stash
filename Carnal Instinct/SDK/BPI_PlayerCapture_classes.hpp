#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlayerCapture.BPI_PlayerCapture_C
class IBPI_PlayerCapture_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlayerCapture_C* GetDefaultObj();

	void PassReference(class ABP_PlayerCapture_C* Capture_Reference);
	void Detach_from_Player_Capture(const struct FS_ItemData& Item_Data);
	void Attach_to_Player_Capture(const struct FS_ItemData& Item_Data);
};

}


