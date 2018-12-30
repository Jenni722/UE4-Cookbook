// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDateTime.h"

int32 UMyDateTime::SecondsBetweenDateTime(FDateTime time1, FDateTime time2)
{
	return time2.ToUnixTimestamp() - time1.ToUnixTimestamp();
}
