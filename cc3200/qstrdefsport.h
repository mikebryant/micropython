/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 * Copyright (c) 2015 Daniel Campora
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// for machine module
Q(machine)
#ifdef DEBUG
Q(info)
#endif
Q(reset)
Q(main)
Q(sync)
Q(rng)
Q(freq)
Q(unique_id)
Q(disable_irq)
Q(enable_irq)
Q(idle)
Q(sleep)
Q(deepsleep)
Q(reset_cause)
Q(wake_reason)
Q(IDLE)
Q(SLEEP)
Q(DEEPSLEEP)
Q(POWER_ON)
Q(HARD_RESET)
Q(WDT_RESET)
Q(DEEPSLEEP_RESET)
Q(SOFT_RESET)
Q(WLAN_WAKE)
Q(PIN_WAKE)
Q(RTC_WAKE)

// for wipy module
Q(wipy)
Q(heartbeat)

// entries for sys.path
Q(/flash)
Q(/flash/lib)

// interactive help
Q(help)

// for module weak links
Q(struct)
Q(binascii)
Q(re)
Q(json)
Q(heapq)
//Q(hashlib)

// for os module
Q(os)
Q(uos)
Q(sysname)
Q(nodename)
Q(release)
Q(version)
Q(machine)
Q(uname)
Q(/)
Q(flash)
Q(chdir)
Q(getcwd)
Q(listdir)
Q(mkdir)
Q(rename)
Q(remove)
Q(rmdir)
Q(unlink)
Q(sep)
Q(stat)
Q(urandom)
Q(mkfs)
Q(mount)
Q(unmount)
Q(dupterm)
Q(readonly)
Q(readblocks)
Q(writeblocks)
Q(sync)
Q(count)

// for file class
Q(seek)
Q(tell)
Q(input)
Q(flush)

// for Pin class
Q(Pin)
Q(board)
Q(init)
Q(value)
Q(toggle)
Q(id)
Q(mode)
Q(pull)
Q(drive)
Q(alt)
Q(alt_list)
Q(IN)
Q(OUT)
Q(OPEN_DRAIN)
Q(ALT)
Q(ALT_OPEN_DRAIN)
Q(PULL_UP)
Q(PULL_DOWN)
Q(LOW_POWER)
Q(MED_POWER)
Q(HIGH_POWER)
Q(IRQ_RISING)
Q(IRQ_FALLING)
Q(IRQ_LOW_LEVEL)
Q(IRQ_HIGH_LEVEL)

// for UART class
Q(UART)
Q(init)
Q(deinit)
Q(any)
Q(sendbreak)
Q(id)
Q(baudrate)
Q(bits)
Q(stop)
Q(parity)
Q(pins)
Q(EVEN)
Q(ODD)
Q(RX_ANY)

// for I2C class
Q(I2C)
Q(id)
Q(mode)
Q(baudrate)
Q(pins)
Q(addr)
Q(nbytes)
Q(buf)
Q(stop)
Q(memaddr)
Q(addrsize)
Q(init)
Q(deinit)
Q(scan)
Q(readfrom)
Q(readfrom_into)
Q(writeto)
Q(readfrom_mem)
Q(readfrom_mem_into)
Q(writeto_mem)
Q(MASTER)

// for ADC class
Q(ADC)
Q(ADCChannel)
Q(value)
Q(init)
Q(deinit)
Q(channel)
Q(id)
Q(pin)

// for SD class
Q(SD)
Q(init)
Q(deinit)
Q(id)
Q(pins)

// for RTC class
Q(RTC)
Q(id)
Q(init)
Q(alarm)
Q(alarm_left)
Q(alarm_cancel)
Q(now)
Q(deinit)
Q(datetime)
Q(repeat)
Q(ALARM0)

// for time class
Q(time)
Q(utime)
Q(localtime)
Q(mktime)
Q(sleep)
Q(sleep_ms)
Q(sleep_us)
Q(ticks_ms)
Q(ticks_us)
Q(ticks_cpu)
Q(ticks_diff)

// for select class
Q(select)
Q(uselect)
Q(register)
Q(unregister)
Q(modify)
Q(poll)

// for socket class
Q(socket)
Q(usocket)
Q(getaddrinfo)
Q(family)
Q(type)
Q(send)
Q(sendall)
Q(sendto)
Q(recv)
Q(recvfrom)
Q(listen)
Q(accept)
Q(bind)
Q(settimeout)
Q(setblocking)
Q(setsockopt)
Q(close)
Q(makefile)
Q(protocol)
Q(error)
Q(timeout)
Q(AF_INET)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(IPPROTO_SEC)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)

// for ssl class
Q(ssl)
Q(ussl)
Q(wrap_socket)
Q(sock)
Q(keyfile)
Q(certfile)
Q(server_side)
Q(cert_reqs)
Q(ca_certs)
Q(SSLError)
Q(CERT_NONE)
Q(CERT_OPTIONAL)
Q(CERT_REQUIRED)

// for network class
Q(network)
Q(server)
Q(init)
Q(deinit)
Q(login)
Q(timeout)
Q(isrunning)

// for WLAN class
Q(WLAN)
Q(id)
Q(init)
Q(mode)
Q(auth)
Q(ssid)
Q(bssid)
Q(mac)
Q(antenna)
Q(scan)
Q(connect)
Q(isconnected)
Q(disconnect)
Q(sec)
Q(channel)
Q(rssi)
Q(ifconfig)
Q(config)
//Q(connections)
//Q(urn)
Q(STA)
Q(AP)
Q(OPEN)
Q(WEP)
Q(WPA)
Q(WPA2)
Q(INT_ANT)
Q(EXT_ANT)
Q(ANY_EVENT)

// for WDT class
Q(WDT)
Q(feed)
Q(timeout)

// for irq class
Q(irq)
Q(init)
Q(enable)
Q(disable)
Q(flags)
Q(trigger)
Q(handler)
Q(priority)
Q(wake)

// for SPI class
Q(SPI)
Q(id)
Q(mode)
Q(baudrate)
Q(bits)
Q(polarity)
Q(phase)
Q(firstbit)
Q(init)
Q(deinit)
Q(write)
Q(read)
Q(readinto)
Q(write_readinto)
Q(nbytes)
Q(buf)
Q(MASTER)
Q(MSB)

// for Timer class
Q(Timer)
Q(TimerChannel)
Q(init)
Q(deinit)
Q(freq)
Q(period)
Q(mode)
Q(width)
Q(channel)
Q(polarity)
Q(duty_cycle)
Q(time)
Q(event_count)
Q(event_time)
Q(A)
Q(B)
Q(ONE_SHOT)
Q(PERIODIC)
Q(EDGE_COUNT)
Q(EDGE_TIME)
Q(PWM)
Q(POSITIVE)
Q(NEGATIVE)

// for uhashlib module
//Q(uhashlib)
//Q(update)
//Q(digest)
//Q(md5)
//Q(sha1)
//Q(sha256)

// for ubinascii module
Q(ubinascii)
Q(hexlify)
Q(unhexlify)
Q(a2b_base64)
Q(b2a_base64)

